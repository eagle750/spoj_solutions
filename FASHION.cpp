#include <iostream>
#include<algorithm>
#define ll long long int
using namespace std;
 
int main()
{
   ll t,n,a[100000],b[100000],i,sum,c;
   cin>>t;
   while(t--)
   {
       cin>>n;
       c=0;sum=0;
       for(i=0;i<n;i++)
           cin>>a[i];
           for(i=0;i<n;i++)
            cin>>b[i];
       sort(a,a+n);
       sort(b,b+n);
       for(i=0;i<n;i++)
       {
           sum=sum+(a[i]*b[i]);
           //cout<<sum<<endl;
       }
       cout<<sum<<endl;
 
   }
    return 0;
}