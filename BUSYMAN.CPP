#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
ios_base::sync_with_stdio(0);
ll t,n,t1,t2,x,y;
cin>>t;
while(t--)
{
    cin>>n;
    vector<pair<ll,ll> >a;
    vector<ll>b;
  for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        b.push_back(x);
        a.push_back(make_pair(y,i));
    }
    ll ans=1,j=0;
    sort(a.begin(),a.end());
    for(ll i=1;i<n;i++)
    {
        if(b[a[i].second]>=a[j].first)
        {
            ans++;j=i;
        }
    }
    cout<<ans<<endl;
}
    return 0;
}