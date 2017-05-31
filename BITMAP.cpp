#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
int a[202][202];
ll n,m;
ll bfs(ll i,ll j)
{
    queue<ll>q;
    q.push(i);
    q.push(j);
    a[i][j]=0;
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        ll y=q.front();
        q.pop();
        ll d=a[x][y]+1;
        if(y-1>=0&&d<a[x][y-1])
        {
            q.push(x);q.push(y-1);
            a[x][y-1]=d;
        }
        if(y+1<m&&d<a[x][y+1])
        {
            q.push(x);q.push(y+1);
            a[x][y+1]=d;
        }
        if(x-1>=0&&d<a[x-1][y])
        {
            q.push(x-1);q.push(y);
            a[x-1][y]=d;
        }
        if(x+1<n&&d<a[x+1][y])
        {
            q.push(x+1);q.push(y);
            a[x+1][y]=d;
        }
    }
}
int main()
{
    ll t,i,j;char ch;
    s(t);
    while(t--)
    {
        s(n);s(m);
        vector< pair<ll,ll> >v;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ch;
                if(ch=='1')
                {
                    a[i][j]==-1000;
					v.push_back(make_pair(i,j));
                }
                else
                    a[i][j]=1000;
            }
        }
        for(i=0;i<v.size();i++)
            bfs(v[i].first,v[i].second);
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
    }
    return 0;
}
 