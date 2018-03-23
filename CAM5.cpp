#include <bits/stdc++.h>
#define ll long long int
 
using namespace std;
ll n;
ll visited[100002];
vector<vector<ll> >g(100001);
void dfs(int i){
	if(visited[i])
	  return;
	visited[i]=1;
	for(vector<ll>::iterator it=g[i].begin();it!=g[i].end();it++){
		if(!visited[*it])
		dfs(*it);
	}
}
int main()
{
ios_base::sync_with_stdio(false);
ll t,q,x,y;
cin>>t;
while(t--)
{
    for(int i=0;i<n;i++)
		   g[i].clear();
    cin>>n>>q;
   while(q--)
   {
       cin>>x>>y;
       g[x].push_back(y);
       g[y].push_back(x);
   }
   memset(visited,0,sizeof(visited));
   ll cnt=0;
   for(ll i=0;i<n;i++)
   {
       if(visited[i]==0)
       {
           cnt++;
           dfs(i);
       }
   }
   cout<<cnt<<endl;
}
 
    return 0;
}