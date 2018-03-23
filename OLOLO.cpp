#include <iostream>
#include<stdio.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
 ll n,a[500001],i,ans;
 s(n);
 ans=0;
    for( i=0;i<n;i++)
 {
        s(a[i]);
        ans=ans^a[i];
}
 p(ans);
  return 0;
}
 
