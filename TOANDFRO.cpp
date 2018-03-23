#include <iostream>
#include<algorithm>
#define ll long long int
using namespace std;
 
int main()
{
  ll n,i,j,x,k,a,y;char c[300][300];string s;
  while(1)
  {
      cin>>n;
      if(n==0)
        break;
      cin>>s;
      x=s.length();
      y=x/n;
      k=0;a=0;
      x=0;
      for(i=0;i<y;i++)
      {
          a=k+n;
          k=k+x;
          for(j=0;j<n;j++)
          {
              if(i%2==0)
              {
               c[i][j]=s[k];
               k++;
               x=0;
              }
              else
            if(i%2==1)
            {
             c[i][j]=s[--a];
             x++;
            }
          }
      }
      for(i=0;i<n;i++)
      {
      for(j=0;j<y;j++)
     {
      cout<<c[j][i];
     }
      }
cout<<endl;
 
  }
    return 0;
}
 