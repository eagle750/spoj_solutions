#include <bits/stdc++.h>
#define ll long long int
#define vi vector<ll>
#define vvi vector<vector<ll> >
#define icin(x) scanf("%lld",&x)
#define pb push_back
#define mp make_pair
using namespace std;
vi pre,post,in,oth_in;
vvi tree;
ll n;
// storing the location of the enteries in inorder traversal
void create()
{
  oth_in.resize(n+1);
  for(ll i=0;i<n;i++)
        oth_in[in[i]]=i;
}
void solve(ll pre_l,ll pre_r,ll in_l,ll in_r)
{
    if(pre_l>=pre_r)
        return ;
    ll root=pre[pre_l];
    ll oth=oth_in[root];
    ll left=oth-in_l,right=in_r-oth;
    if(left>0)
        {
            tree[root].pb(pre[pre_l+1]);
            solve(pre_l+1,pre_l+left,in_l,oth-1);
        }
        if(right>0)
        {
            tree[root].pb(pre[pre_r-right+1]);
            solve(pre_r-right+1,pre_r,oth+1,in_r);
        }
}
vi check;
void postorder(ll x)
{
    for(ll i=0;i<tree[x].size();i++)
    postorder(tree[x][i]);
    check.pb(x);
}
int main()
{
icin(n);
	pre.resize(n),post.resize(n),in.resize(n);
for(ll i=0;i<n;i++) icin(pre[i]);
for(ll i=0;i<n;i++) icin(post[i]);
for(ll i=0;i<n;i++) icin(in[i]);
	tree.resize(n+1,vi(0));
create();
solve(0,n-1,0,n-1);
postorder(pre[0]);
int c=0;
for(ll i=0;i<n;i++)
    if(check[i]!=post[i])
    c=1;
if(c==0)
    cout<<"yes";
else
    cout<<"no";
    return 0;
}