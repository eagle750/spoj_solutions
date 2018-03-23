#include <iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
int isprime(ll n)
{
    ll c=1;
    if(n==1)
        return 0;
    else
        if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            c=0;
            break;
        }
    }
    return c;
}
int main()
{
ll t,n,m,i,j;
s(t);
while(t--)
{
    s(n); s(m);
 
    for(i=n;i<=m;i++)
    {
        if(isprime(i)==1)
            p(i);
    }
}
    return 0;
}
 