#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
    ll n,temp,t,temp1,c,count,first;
    ll a[100000],f[100000];
     c=0;
    count=0;
    first=0;
    s(n);
    memset(a,0,sizeof(a));
   for(ll i=0;i<n;i++)
   {
      cin>>f[i]>>t;
       for(ll j=0;j<t;j++)
       {
           s(temp1);
           a[temp1]=1;
       }
   }
 for(ll i=0;i<n;i++)
     a[f[i]]=0;
     for(ll i=0;i<100000;i++)
     {
         if(a[i]==1)
            count++;
     }
   p(count);
    return 0;
}
 