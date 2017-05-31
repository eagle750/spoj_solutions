#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
ll findlog(ll n)
{
    ll c=0;
    while(n)
    {
        n=n>>1;
        c++;
    }
    return c-1;
}
ll find(ll n)
{
    ll lvalue;
    if((n&n-1)==0)
        return n;
    else
     lvalue=findlog(n);
    ll ans=n-(1<<lvalue);
    return (ans<<1);
 
}
int main()
{
    ll n;
    while(true)
    {
           s(n);
        if(n==0)
            break;
        else
            p(find(n));
    }
 
    return 0;
}
 