#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll fa[1000004],mx;
ll update(ll a,ll b)
{
    for(;a<=mx;a+=a&(-a))
        fa[a]+=b;
}
ll query(int b)
{
    ll sum=0;
    for(;b>0;b-=b&(-b)) sum+=fa[b];
    return sum;
}
ll query_sum(ll a,ll b)
{
    return (query(b)-(a==1?0:query(a-1)));
}
int main()
{
ios_base::sync_with_stdio(0);
ll n,q,a,b;
cin>>n>>q;
mx=n;
memset(fa,0,sizeof(fa));
while(q--)
{
    string s;
    cin>>s>>a>>b;
    if(s[0]=='a')
        update(a,b);
        else
            cout<<query_sum(a,b)<<endl;
}
    return 0;
}
 