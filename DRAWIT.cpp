#include <bits/stdc++.h>
#define ll long long int
#define vi vector<ll>
#define vvi vector<vector<ll> >
#define icin(x) scanf("%lld",&x)
#define pb push_back
#define mp make_pair
using namespace std;
 
vvi g;
vi visited,deg;
void dfs(ll x)
{
    visited[x]=1;
    for(ll i:g[x])
        if(visited[i]==0)
        dfs(i);
}
int main()
{
    ll t,n,k;
icin(t);
while(t--)
{
    icin(n);
    icin(k);
    visited.resize(n+1,0);
    deg.resize(n+1,0);
	g.resize(n+1,vi(0));
  //  memset(visited,0,sizeof(visited));
   // memset(deg,0,sizeof(deg));
    while(k--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        g[x].pb(y);
        g[y].pb(x);
        deg[x]+=z;
        deg[y]+=z;
    }
    dfs(1);
    ll f=0;
    for(ll i=1;i<=n;i++)
        if(visited[i]==0)
            f=1;
        if(f==1)
            {
                cout<<"NO"<<endl;
        continue;
        }
        ll odd=0;
        for(ll i=1;i<=n;i++)
            if(deg[i]&1)
            odd++;
        if(odd>2||odd==1)
                cout<<"NO"<<endl;
        else
            if(odd==0)
            cout<<"YES "<<1<<endl;
        else
        {
            for(ll i=1;i<=n;i++)
            {
                if(deg[i]&1)
                {
                cout<<"YES "<<i<<endl;
                break;
                }
            }
        }
        visited.clear();
        deg.clear();
        g.clear();
}
    return 0;
}
 