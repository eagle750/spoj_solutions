#include <iostream>
#include<vector>
#include<string>
#include<ctype.h>
#include<bits/stdc++.h>
#define MAX 200
using namespace std;
 
char total[MAX],dif[MAX],klaud[MAX],natal[200];
 
void divByTwo(char t[],int len,char name[])
{
    int i=0,j=0,a=0,b=0,c=0;
    for(i=len-1;i>=0;i--)
    {
        b=(a*10+t[i]-'0')/2;
        a=(a*10+t[i]-'0')%2;
        if(b)
            c=1;
        if(c)
            name[j++]=b+'0';
    }
    if(!j)
        j++;
    name[j]=0;
 
}
void cal()
{
    char temp[MAX];
    int i=0,j=0,a=0,b=0,c=0,k=0;
 int lentotal= strlen(total);
 int lendif=strlen(dif);
   for(i=lentotal-1,j=lendif-1;i>=0||j>=0||c;i--,j--,k++)
   {
       a=(i>=0)?total[i]-'0':0;
       b=j>=0?dif[j]-'0':0;
       temp[k]=(a+b+c)%10+'0';
       c=(a+b+c)/10;
   }
   temp[k]=0;
   strcpy(klaud,"0");
   divByTwo(temp,k,klaud);
 
   for(i=lentotal-1,j=lendif-1,k=c=0;i>=0;i--,j--,k++)
   {
       a=total[i]-'0';
       b=j>=0?dif[j]-'0':0;
       if(a<b+c)
       {
           temp[k]=(10+a-b-c)+'0';
           c=1;
       }
       else
       {
           temp[k]=a-b-c+'0';
           c=0;
       }
   }
   temp[k]=0;
   strcpy(natal,"0");
   divByTwo(temp,k,natal);
}
int main()
{
int n,i;string s1,s2;
for(i=0;i<10;i++)
{
    cin>>total>>dif;
    cal();
    cout<<klaud<<endl<<natal<<endl;
 
}
    return 0;
}