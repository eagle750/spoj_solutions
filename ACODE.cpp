#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   string s;
   int b[100003];
   while(1)
   {
       cin>>s;
       if(s=="0")
        break;
               int n=s.length();
           memset(b,0,sizeof(b));
           b[0]=1;
       for(int i=1;i<n;i++)
       {
           int x(s[i-1]-'0');
           int y=(s[i]-'0');
           x=x*10+y;
    //  cout<<x<<endl;
      if(s[i]-'0')
        b[i]=b[i-1];
       if(x>9&&x<=26)
      {
          if(i==1)
            b[i]=b[i]+1;
          else
            b[i]+=b[i-2];
      }
     // cout<<b[i]<<endl;
       }
        cout<<b[n-1]<<endl;
   }
    return 0;
}
 