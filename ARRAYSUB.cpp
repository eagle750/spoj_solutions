#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
  int n,k,i,j,max=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
for(i=0;i<=n-k;i++)
    {
        max=a[i];
        for(j=i+1;j<i+k;j++)
        {
            if(a[j]>max)
                max=a[j];
        }
     //   cout<<endl;
        cout<<max<<" ";
}
    return 0;
}