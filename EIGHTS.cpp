#include <iostream>
#define ll long long int
using namespace std;
 
int main()
{
ll t,n,i,c1,a,b,c,d;
cin>>t;
while(t--)
{
cin>>n;
c1=-1;
a=192;b=442;c=692;d=942;
if(n==1)
    cout<<a<<endl;
    else
if(n==2)
    cout<<b<<endl;
else
    if(n==3)
        cout<<c<<endl;
        else
    if(n==4)
        cout<<d<<endl;
    else
    {
for(i=4;;i=i+4)
{
    if(n<=i)
    {
        c1++;
        if(n%4==1)
    cout<<c1<<a<<endl;
        else
            if(n%4==2)
    cout<<c1<<b<<endl;
      else
      if(n%4==3)
    cout<<c1<<c<<endl;
    else
        if(n%4==0)
    cout<<c1<<d<<endl;
    break;
    }
    c1++;
}
    }
}
    return 0;
}
 