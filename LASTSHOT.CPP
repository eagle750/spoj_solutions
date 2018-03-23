#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<vector<ll> >g(1000001);
ll visited[100005];
ll cnt;
void dfs(ll x)
{
    visited[x]=1;
    cnt++;
    for(ll i=0;i<g[x].size();i++)
        if(visited[g[x][i]]==0)
        dfs(g[x][i]);
}
int main()
{
ll n,m,x,y;
cin>>n>>m;
while(m--)
{
    cin>>x>>y;
    g[x].push_back(y);
}
ll cnt1,mx=INT_MIN;
for(ll i=1;i<=n;i++){
cnt=0;
memset(visited,0,sizeof(visited));
      dfs(i);
      mx=max(mx,cnt);
}
cout<<mx;
    return 0;
}
 