#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
ll t,n;
s(t);
while(t--)
{
    s(n);
    ll i,c=0;
    for(i=0;;i++)
    {
        if((((i*i)+i+2)/2)>=n)
        {
            c=i;
         break;
        }
    }
    p(c);
}
 
    return 0;
}