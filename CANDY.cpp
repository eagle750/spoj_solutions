#include <iostream>
#include<algorithm>
#define ll long long int
using namespace std;
 
int main()
{
  ll n,a[100000],b[100000],sum,x,c,i;
  while(1)
  {
      cin>>n;
      if(n==-1)
        break;
        sum=0;x=0;c=0;
      for(i=0;i<n;i++)
      {
       cin>>a[i];
        sum=sum+a[i];
      }
      if(sum%n!=0)
      cout<<"-1"<<endl;
      else
        {
            x=sum/n;
        fill_n(b,n,x);
        for(i=0;i<n;i++)
        {
           if(a[i]>b[i])
        c=c+a[i]-b[i];
        }
      cout<<c<<endl;
      }
 
  }
    return 0;
}
 