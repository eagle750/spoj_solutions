#include <iostream>
#include<stdio.h>
#define ll long long int
using namespace std;
bool powTwo(ll n)
{
return n&&(!(n&(n-1)));
}
int main()
{
ll n;
cin>>n;
if(powTwo(n))
    cout<<"TAK"<<endl;
else
    cout<<"NIE"<<endl;
    return 0;
}