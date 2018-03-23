#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
ios_base::sync_with_stdio(0);
ll t,n,t1,t2,x,y,mx=0;
    cin>>n;
    vector<pair<ll,ll> >a;
    vector<ll>b;
  for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    ll ans[100030];t=1;
        memset(ans,0,sizeof(ans));
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
   ll ans1=0;
    for(ll i=0;i<n;i++)
    {
         ll c=a[i].second;
         for(ll j=c;j>=1;j--)
            if(ans[j]==0)
         {
             ans[j]=1;ans1+=a[i].first;break;
         }
    }
    cout<<ans1<<endl;
    return 0;
}
 