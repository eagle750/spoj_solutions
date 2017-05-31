#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)
{
    if(a==0)
        return b;
    else
        return(gcd(b%a,a));
}
int main()
{
    ll t,n,m,x;
    s(t);
    while(t--)
    {
            ll count=0;
 
        s(n);s(m);
       ll a=gcd(n,m);
       for(ll i=1;i*i<=a;i++)
       {
         if(a%i==0)
         {
             count++;
             if(a/i!=i)
                count++;
         }
       }
       p(count);
    }
    return 0;
}
 