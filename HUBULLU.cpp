#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
  ll t,n,ini;
  s(t);
  while(t--)
  {
      s(n);s(ini);
      if(ini==0)
        cout<<"Airborne wins."<<endl;
      else
        cout<<"Pagfloyd wins."<<endl;
  }
    return 0;
}
 