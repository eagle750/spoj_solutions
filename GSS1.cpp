#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
 
struct node {
	ll ans, sum, suf, pref;
	node() {}
};
 
node tree[200000];
ll n;
 
node make_node(ll v) {
	node ret;
 
	ret.ans = ret.sum = ret.suf = ret.pref = v;
 
	return ret;
}
 
node combine_segments(node left, node right) {
	node ret;
 
	ret.sum = left.sum+right.sum;
	ret.pref = max(left.pref, left.sum+right.pref);
	ret.suf = max(right.suf, right.sum+left.suf);
	ret.ans = max(max(left.ans, right.ans), left.suf+right.pref);
 
	return ret;
}
 
void build_tree(ll arr[], ll x, ll a, ll b) {
	if(a == b)
		tree[x] = make_node(arr[a]);
	else {
		ll mid = (a+b)/2;
		build_tree(arr, x*2, a, mid);
		build_tree(arr, x*2+1, mid+1, b);
		tree[x] = combine_segments(tree[x*2], tree[x*2+1]);
	}
}
 
node query_tree(ll x, ll a, ll b, ll i, ll j) {
	ll mid = (a+b)/2;
 
	if(a >= i && b <= j) return tree[x];
 
	if(j <= mid) return query_tree(x*2, a, mid, i, j);
	else if(i > mid) return query_tree(x*2+1, mid+1, b, i, j);
 
	node left = query_tree(x*2, a, mid, i, mid);
	node right = query_tree(x*2+1, mid+1, b, mid+1, j);
 
	return combine_segments(left, right);
}
 
int main() {
   ll m, x, y,i;
	scanf("%lld", &n);
 
	ll arr[n+1];
	for( i = 1; i <= n; i++) scanf("%lld", &arr[i]);
 
	build_tree(arr, 1, 1, n);
 
 
	scanf("%lld", &m);
 
	while(m--) {
		scanf("%lld %lld", &x, &y);
		printf("%lld\n", query_tree(1, 1, n, x, y).ans);
	}
 
	return 0;
}
 