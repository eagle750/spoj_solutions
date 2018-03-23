#include <bits/stdc++.h>
#define ll long long int
#define vi vector<ll>
#define vvi vector<vector<ll> >
#define pb push_back
#define mp make_pair
#define rep(i, n)  for(int i = 1; i < =(n); ++i)
#define SORT(v) sort(v.begin(),v.end())
#define fill(a,v)  memset(a, v, sizeof (a))
#define T ll t; cin>>t;while(t--)
#define MAX 100005
 
using namespace std;
int main()
 {
T
{
    ll n;
    cin>>n;
    double ans=n;
    for(ll i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
        while(n%i==0)
            n/=i;
        ans*=(1.0-(1.0/(double)i));
        }
    }
    if(n>1)
    ans*=(1.0-(1.0/(double)n));
    cout<<ans<<"\n";
}
    return 0;
 }
 