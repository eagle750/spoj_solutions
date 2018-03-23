#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
 
int main()
{
ll t,n,i,five,c;
cin>>t;
while(t--)
{
    five=5;c=0;
cin>>n;
while(1)
{
 c=c+n/five;
 if(n/five==0)
    break;
 five=five*5;
}
cout<<c<<endl;
}
    return 0;
}
 