#include <bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return(gcd(b,a%b));
}
ll mod(ll n,char ch[])
{
  ll mod1=0;
  for(ll i=0;i<strlen(ch);i++)
  mod1=(mod1*10+(ch[i]-'0'))%n;
  return mod1;
}
int main()
{
 ll t,n,x,y,c,temp;char ch[256];
 s(t);
 while(t--)
 {
     s(n);
     c=0;
     scanf("%s",ch);
     temp=n;
     while(temp!=0)
     {
        temp=temp/10;
        c++;
     }
     if(c==0)
        printf("%s\n",ch);
     else
     {
       x=mod(n,ch);
       y=gcd(n,x);
       p(y);
     }
 }
    return 0;
}
 