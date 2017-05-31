#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
float n,x,sum,a;ll c;
    cin>>n;
    while(n)
{
    sum=0.0;
     a=2;c=0;
        while(sum<n)
         {
         sum=sum+(1.0/a);
         c++;
         a++;
         }
    cout<<c<<" "<<"card(s)"<<endl;
    cin>>n;
}
    return 0;
}
 