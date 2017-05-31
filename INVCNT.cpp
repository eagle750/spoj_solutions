#include <iostream>
#define ll long long int
#define size 500000
using namespace std;
ll a[size+2],b[size+2],count;
void  Merge(ll left,ll mid,ll right)
{
    ll i,j,k;
    i=k=left;
    j=mid;
    while((i<=mid-1)&&(j<=right))
    {
    if(a[i]<=a[j])
    b[k++]=a[i++];
        else
        {
        b[k++]=a[j++];
        count=count+(mid-i);
    }
    }
    while(i<=mid-1)
        b[k++]=a[i++];
        while(j<=right)
            b[k++]=a[j++];
            i=0;
        for(i=left;i<=right;i++)
            a[i]=b[i];
}
void MSCount(ll left,ll right)
{
      ll mid=0;
    if(right>left)
    {
    mid=(left+right)/2;
      MSCount(left,mid);
      MSCount(mid+1,right);
      Merge(left,mid+1,right);
    }
}
int main()
{
  ll t,n,i,c;
  cin>>t;
  while(t--)
  {
      cin>>n;
      for(i=0;i<n;i++)
        cin>>a[i];
        count=0;
        MSCount(0,n-1);
    cout<<count<<endl;
  }
    return 0;
}
 