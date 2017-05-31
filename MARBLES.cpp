#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
ll nCr(ll n, ll r)
{
 
    if(r>n/2)
        r=n-r;
    ll ans=1,i;
    for( i=0;i<r;i++)
    {
    ans=ans*(n-i);
    ans=ans/(i+1);
    }
    return ans;
}
int main() {
  int T;
  ll N,K,R,n,r;
 
  scanf("%d",&T);
  while(T--) {
    scanf("%lld %lld",&N,&K);
    r= N - K;
    n = K + r - 1;
    printf("%lld\n",nCr(n,r));
  }
    return 0;
}
 