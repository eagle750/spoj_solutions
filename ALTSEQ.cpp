#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
ll n,a[100004],dp[100004]={0};
cin>>n;
set<ll>s;
for(ll i=0;i<n;i++)
    cin>>a[i];
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[i]>0&&a[j]<0&&dp[j]<dp[i]+1&&abs(a[i])<abs(a[j]))
            dp[j]=dp[i]+1;
        else
            if(a[i]<0&&a[j]>0&&dp[j]<dp[i]+1&&abs(a[i])<abs(a[j]))
            dp[j]=dp[i]+1;
    }
}
ll c=0;
for(ll i=0;i<n;i++)
if(dp[i]>c)
    c=dp[i];
cout<<c+1<<endl;
    return 0;
}
 