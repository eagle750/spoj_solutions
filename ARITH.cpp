#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
ll t;
s(t);
while(t--)
{
ll ans;
ll a;
char ch;
s(ans);
while(1)
{
    cin>>ch;
    if(ch=='=')
        break;
    cin>>a;
      if(ch=='+')
        ans=ans+a;
    else
        if(ch=='-')
        ans=ans-a;
    else
        if(ch=='*')
        ans=ans*a;
    else
        if(ch=='/')
        ans=floor(ans/a);
    else
        if(ch=='%')
        ans=ans%a;
}
p(ans);
}
    return 0;
}