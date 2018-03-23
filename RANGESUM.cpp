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
   {#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll BIT[524288],n;
void update(ll x,ll y)
{
    for(ll i=x;i>0;i-=i&-i)
        BIT[i]+=y;
}
ll getSum(ll l)
{
    l=n+1-l;
    ll sum=0;
    for(ll i=l;i<=n;i+=i&-i)
        sum+=BIT[i];
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
  cin>>n;
 ll a[n];
 for(ll i=n;i>0;i--)
 {
     cin>>a[i];
     update(i,a[i]);
 }
 ll q,c,l,r,x;
 cin>>q;
 while(q--)
 {
     cin>>c;
     if(c==1)
     {
         cin>>l>>r;
         cout<<getSum(r)-getSum(l-1)<<endl;
     }
     else
     {
         cin>>x;
         n++;
            update(n,x);
     }
 }
    return 0;
}
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