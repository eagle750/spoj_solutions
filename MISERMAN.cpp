#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
ll a[1000][1000];
ll dp[1000][1000];
int main()
{
    ll m,n,ans;
    s(n);s(m);
   // ans=9999;
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
            s(a[i][j]);
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<m;j++)
                {
                     if(i==0)
                dp[i][j]=a[i][j];
            else
            {
                if(j==0)
                dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
                else
                    if(j==m-1)
                    dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
                else
                    dp[i][j]=a[i][j]+min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
            }
 
                }
            }
            ans=dp[n-1][1];
            for(ll i=0;i<m;i++)
                ans=min(ans,dp[n-1][i]);
    p(ans);
    return 0;
}
 