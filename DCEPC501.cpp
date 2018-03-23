#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
  //  ios_base::sync_with_stdio();
      ll n,t;
      cin>>t;
      while(t--)
      {
          cin>>n;
          ll a[n+12],dp[n+12];
          memset(dp,0,sizeof(dp));
          for(int i=0;i<n;i++) cin>>a[i];
          dp[n-1]=a[n-1];dp[n-2]=dp[n-1]+a[n-2];dp[n-3]=dp[n-2]+a[n-3];
          for(int i=n-4;i>=0;i--)
          {
              dp[i]=max(a[i]+dp[i+2],max(a[i]+a[i+1]+dp[i+4],a[i]+a[i+1]+a[i+2]+dp[i+6]));
          }
          cout<<dp[0]<<endl;
      }
    return 0;
}