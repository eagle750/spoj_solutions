#include <iostream>
#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
    ll t,n,k,i,temp,price[10000],ans[10000],j;
    s(t);
    while(t--)
    {
        s(n);
        s(k);
        for(i=1;i<=k;i++)
           s(price[i]);
        for(i=1;i<=k;i++)
            ans[i]=price[i];
        for(i=2;i<=k;i++)
        {
            for(j=1;j<i;j++)
            {
                if(price[i-j]==-1||ans[j]==-1)
                 continue;
                 if(ans[i]==-1)
                ans[i]=ans[j]+price[i-j];
               else
                ans[i]=min(ans[i],ans[j]+price[i-j]);
            }
        }
        if(k==0)
            printf("0\n");
        else
            p(ans[k]);
    }
    return 0;
}
 