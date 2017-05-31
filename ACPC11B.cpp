#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
//#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
  ll t;
  s(t);
  while(t--)
  {
      int n,a[100000];
      int m,b[100000];
      int c[100000];
      cin>>n>>a[0];
      for(ll i=1;i<n;i++)
        cin>>a[i];
      cin>>m>>b[0];
      for(ll i=1;i<m;i++)
        cin>>b[i];
      sort(a,a+n);
      sort(b,b+m);
        ll j=0;
      ll min1=INT_MAX;
      for(ll i=0;i<n;i++)
      {
          ll x,y;
          x=y=INT_MAX;
          for( j=0;j<m;j++)
          {
             x=abs(a[i]-b[j]);
             if(x<min1)
                min1=x;
          }
         // cout<<b[j]<<" "<<x<<" "<<y<<endl;
      //    min1=min(min1,min(x,y));
      }
      cout<<min1<<endl;
  }
    return 0;
}