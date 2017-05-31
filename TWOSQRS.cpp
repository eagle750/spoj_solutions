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
        ll i=sqrt(n);
        ll j=0;
        while(i>0)
        {
            if(j*j>n)
            {
                printf("No\n");
                break;
            }
            else
                if((i*i)+(j*j)==n)
            {
                printf("Yes\n");
                break;
            }
            else
                if((i*i)+(j*j)<n)
                j++;
            else
                i--;
        }
    }
    return 0;
}
 