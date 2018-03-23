#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
ll sum=0;
 ll count1=0;
ll f(ll n)
{
    sum=0;
    while(n!=0)
    {
        ll r=n%10;
        sum+=r*r;
        n=n/10;
    }
    if(sum>10)
    {
        count1++;
       return f(sum);
    }
    else
    {
        count1++;
        return count1;
    }
 
}
int main()
{
    ll n;
    ll a[10];
        for(int i=1;i<=9;i++)
            a[i]=i*i;
        s(n);
        ll cnt=f(n);
        if(sum==1||sum==10)
        {
            if(sum==1)
            p(cnt);
            else
                cout<<cnt+1<<endl;
        }
        else
            cout<<"-1"<<endl;
 
    return 0;
}
 