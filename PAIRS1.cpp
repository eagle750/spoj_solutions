#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
  ll n,k;
  cin>>n>>k;
  ll a[n];
  ll cnt=0;
  for(ll i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  for(ll i=0;i<n;i++)
  {
      ll left=i+1,right=n-1,mid=0,ans=a[i]+k;
      while(left<=right)
      {
          mid=(right+left)/2;
          if(a[mid]==ans)
            {
                cnt++;
                break;
            }
            else
                if(a[mid]>ans)
                    right=mid-1;
                else
                    if(a[mid]<ans)
                    left=mid+1;
      }
  }
  cout<<cnt<<endl;
    return 0;
}
 