#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
ll visited[10001],parent[20001];
typedef struct node
{
struct node *next;
ll vertex;
}node;
node *G[10001];
 
bool dfs(ll v)
{
node *a;
ll x;
visited[v]=1;
a=G[v];
while(a!=NULL)
{
  x=a->vertex;
  if(!visited[x])
  {
      parent[x]=v;
      dfs(x);
  }
  else
  {
    if(visited[x]&&parent[x]!=v)
    return false;
  }
    a=a->next;
}
    return true;
}
int main()
{
  //  double d1=clock();
ll m,i,j,u,v,n,c;
memset(visited,0,sizeof(visited));
memset(parent,-1,sizeof(parent));
s(n);
s(m);
c=0;
for(j=0;j<m;j++)
{
    s(u);s(v);
    node *a,*b;
    a=(node*)malloc(sizeof(node));
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
}
if(m>=n)
{
printf("NO\n");
}
else
{
if(dfs(1))
{
    for(i=1;i<=n;i++)
        if(visited[i]==0)
        c=1;
        if(c==0)
printf("YES\n");
else
    printf("NO\n");
}
else
    printf("NO\n");
}
//double d2=clock();
//printf("%lf\n",(d2-d1)/CLOCKS_PER_SEC);
 
return 0;
}
 