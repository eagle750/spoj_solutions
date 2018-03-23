#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
stack<char>check;
int main()
{
  char ch[2003];ll i,j=1,k,c,c1,c2,c3,ans;char a;
  for(j=1;;j++)
  {
  scanf("%s",ch);
  if(ch[0]=='-')
  break;
  c=0;
  c1=0;ans=0;
  for(i=0;i<strlen(ch);i++)
  {
    if(!check.empty()&&ch[i]=='}'&&check.top()=='{')
    check.pop();
    else
    check.push(ch[i]);
  }
  c2=0,c3=0;
  i=0,k=0;
  while(!check.empty())
  {
      if(check.top()=='{')
        {
            if(i%2==0)
      c++;
      i++;
        }
      else
        if(check.top()=='}')
        {
            if(k%2==0)
        c1++;
        k++;
        }
      check.pop();
  }
  //cout<<c<<" "<<c1;
  ans=c+c1;
printf("%lld. %lld\n",j,ans);
  }
    return 0;
}
 