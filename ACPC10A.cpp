#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,d1,d2,r1,r2,flag1,flag2;
    while(1)
    {
     cin>>a>>b>>c;
     flag1=flag2=0;
     if(a==0&&b==0&&c==0)
            break;
     d1=b-a;
     d2=c-b;
     if(d1==d2)
    flag1=1;
    if(flag1)
        cout<<"AP"<<" "<<c+d1<<endl;
    else
    {
      if(a>0)
        r1=b/a;
      else
        r1=c/b;
     cout<<"GP"<<" "<<c*r1<<endl;
    }
    }
    return 0;
}