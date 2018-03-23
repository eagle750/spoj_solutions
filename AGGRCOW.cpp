#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
 
using namespace std;
 vector<ll>a;
  ll c,n;
ll f(ll mid)
{
    ll cowsplaced=1,lastpos=a.at(0);
    for(ll i=1;i<n;i++)
    {
       if(a.at(i)-lastpos>=mid)
       {
           if(++cowsplaced==c)return 1;
            lastpos=a.at(i);
       }
    }
    return 0;
}
int main()
{
ll t,i,temp;
s(t);
while(t--)
{
    s(n);s(c);
    a.clear();
    for(i=0;i<n;i++)
    {
       s(temp);
       a.push_back(temp);
    }
    sort(a.begin(),a.end());
    ll start=0;ll finish=(a.at(n-1)-a.at(0)+1);ll mid;
    while(finish-start>1)
    {
        mid=(start+finish)>>1;
        (f(mid)?start:finish)=mid;
    }
    p(start);
}
    return 0;