#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
    for(ll k=1;;k++)
    {
 ll n;
 s(n);
 if(n==0)
 break;
 else
 {
  ll a[n+2][10];ll dp[n+2][10];
 for(ll i=1;i<=n;i++)
 {
 for(ll j=1;j<=3;j++)
 {
 cin>>a[i][j];
 if(i==1)
 {
     if(j<=2)
        dp[i][j]=a[i][j];
     else
        dp[i][j]=a[i][j]+dp[i][j-1];
 }
 else
    if(i==2)
 {
     if(j==1)
        dp[i][j]=dp[1][2]+a[i][j];
     else if(j==2)
     dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j+1]));
     else
        if(j==3)
        dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
 }
 else
    if(j==1)
        dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
        else
        if(j==3)
        dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
    else
        dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1])));
 
 }
 }
  cout<<k<<". "<<dp[n][2]<<endl;
 }
    }
 
    return 0;
}
 