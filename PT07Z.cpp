#include <bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
ll level[10001];
queue<ll>rec;
 
typedef struct node
{
  struct node *next;
  ll vertex;
}node;
node *G[10001];
void bfs(ll v)
{
    node *a;
    level[v]=0;
    rec.push(v);
    ll j,x;
 
    while(!rec.empty())
    {
       j=rec.front();
       rec.pop();
       a=G[j];
       while(a!=NULL)
        {
      //  cout<<"YES"<<endl;
        x=a->vertex;
 
        if(level[x]==-1)
          {
        level[x]=1+level[j];
       // cout<<x<<" "<<level[x]<<endl;
        rec.push(x);
        }
        a=a->next;
        }
    }
}
int main()
{
 ll n,i,u,v,max,x;
 s(n);
  memset(level,-1,sizeof(level));
for(i=0;i<n-1;i++)
{
    s(u);
    s(v);
    node *a,*b,*c,*d;
    a=(node *)malloc(sizeof(node));
    a->vertex=v;
    a->next=NULL;
    if(G[u]==NULL)
    G[u]=a;
    else
    {
         b=G[u];
         while(b->next!=NULL)
         b=b->next;
         b->next=a;
    }
    c=(node *)malloc(sizeof(node));
    c->vertex=u;
    c->next=NULL;
    if(G[v]==NULL)
    G[v]=c;
    else
    {
         d=G[v];
         while(d->next!=NULL)
         d=d->next;
         d->next=c;
    }
}
  bfs(1);
  max=level[1];
   for(i=2;i<=n;i++)
   {
      if(level[i]>max)
      {
       max=level[i];
       x=i;
      }
   }
     memset(level,-1,sizeof(level));
   //cout<<max<<endl;
   bfs(x);
   max=level[1];
   for(i=2;i<=n;i++)
   {
      if(level[i]>max)
       max=level[i];
   }
   p(max);
    return 0;
}
 