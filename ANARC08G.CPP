#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
int n;
for(int k=1;;k++)
{
    cin>>n;
    if(n==0)
        break;
    int a[n+1][n+1];int ans1=0,ans2=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        cin>>a[i][j],ans1+=a[i][j];
    int ans[n+1];
    memset(ans,0,sizeof(ans));
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
     ans[i]+=a[i][j];
       for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
     ans[i]-=a[j][i];
     for(int i=1;i<=n;i++)
     {
         if(ans[i]<0)
         ans2+=abs(ans[i]);
     }
     cout<<endl;
     cout<<k<<". "<<ans1<<" "<<ans2<<endl;
}
    return 0;
}
 