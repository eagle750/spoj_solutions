#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
void DivByN(char temp[200],ll n)
{
ll rem = 0;
ll dvnd;
ll quot;
ll i;
 
    for(i = 0; i < strlen(temp) ; i++){
        dvnd = (rem * 10) + (temp[i]-'0');
        rem = dvnd % n;
        quot = dvnd / n;
        temp[i] = quot+'0';
    }
    if(rem==0)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
}
int main()
{
ll t,n,i,temp,j,c,r,k,l,a,b;
 cin>>t;
while(t--)
{
  char s[100]={'0'},s1[100]={'0'},temp[200]={0};
cin>>n;
  j=0;c=0;
  for(i=0;i<n;i++)
  {
   cin>>s1;
   if(i==0)
   {
      strcpy(s,s1);
   }
   else
   {
l=0;
   for(j=strlen(s)-1,k=strlen(s1)-1;j>=0||k>=0||c;j--,k--,l++)
   {
      b=k>=0?s1[k]-'0':0;
      a=(j>=0)?s[j]-'0':0;
       temp[l]=(a+b+c)%10+'0';
       c=(a+b+c)/10;
  }
  for(j=0;j<strlen(temp)/2;j++)
{
    char temp1=temp[j];
    temp[j]=temp[strlen(temp)-j-1];
    temp[strlen(temp)-j-1]=temp1;
}
strcpy(s,temp);
  }
  }
  //cout<<temp<<endl;
DivByN(temp,n);
}
    return 0;
}
 