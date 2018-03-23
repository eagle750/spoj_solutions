#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
int n,q;
scanf("%d%d",&n,&q);
vector<int> v;
for(int i=0;i<n;i++)
{
    int temp;
    scanf("%d",&temp);
    v.push_back(temp);
}
int a,b,c;
while(q--)
{
    scanf("%d%d",&a,&b);
    if(a==1)
    {
    scanf("%d",&c);
        b=b-1;
        v.insert(v.begin()+b,c);
    }
    if(a==2)
        {
            b-=1;
            v.erase(v.begin()+b);
        }
        else
            if(a==3)
        {
            b-=1;
          printf("%d\n",v[b]);
        }
}
    return 0;
}
 