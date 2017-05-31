#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
    char ch[10];
    while(1)
    {
        cin>>ch;
        if(ch[0]==ch[1]&&ch[0]=='0')
            break;
        ll num=0;
         num=ch[0]-'0';
         num=num*10+(ch[1]-'0');
        ll x=ch[3]-'0';
        if(num==0)
            num=1;
        while(x--)
            num=num*10;
      //  cout<<num;
          ll i=0;
          for(i=num;i>=1;i--)
           {
               ll a=i;
               if(a&&(!(a&a-1)))
                break;
           }
           ll count=1;
           for(ll j=i+1;j<=num;j++)
           {
               count=count+2;
           }
           p(count);
    }
    return 0;
}