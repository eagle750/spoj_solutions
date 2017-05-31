#include <iostream>
#define ll long long int
using namespace std;
 
int main()
{
  ll t,n,i,a[10000],index,temp;
  cin>>t;
  while(t--)
  {
      cin>>n;
      index=0;a[0]=1;
      for(;n>=2;n--)
      {
          temp=0;
          for(i=0;i<=index;i++)
          {
              temp=a[i]*n+temp;
              a[i]=temp%10;
              temp=temp/10;
          }
          while(temp)
          {
              a[++index]=temp%10;
              temp=temp/10;
          }
      }
      for(i=index;i>=0;i--)
          cout<<a[i];
   cout<<endl;
  }
    return 0;
}
 