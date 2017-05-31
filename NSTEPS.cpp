#include <iostream>
#define ll long long int
using namespace std;
 
int main()
{
ll t,x,y;
cin>>t;
while(t--)
{
    cin>>x>>y;
   if(x==y&&x%2==0)
    cout<<x+y<<endl;
    else
   if(x==y&&x%2==1)
    cout<<x+y-1<<endl;
    else
    if(x==y+2&&x%2==0)
        cout<<x+y<<endl;
    else
        if(x==y+2&&x%2==1)
            cout<<x+y-1<<endl;
        else
            cout<<"No Number"<<endl;
 
}
    return 0;
}
 