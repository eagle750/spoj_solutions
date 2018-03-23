#include <bits/stdc++.h>
 
using namespace std;
int t,m,n,parent[100004],a,b,visited[100005],q,c,k,x,y;
 
int lca(int a,int b)
{
    for(int i=1;i<=n;i++) visited[i] = 0;
    visited[a]=1;
    while(parent[a]!=a)
    {
        visited[a]=1;
        a=parent[a];
    }
    visited[a]=1;
    while(visited[b]!=1)
        b=parent[b];
    return b;
}
int main()
{
unsigned t,case_no;
	scanf("%u",&t);
	for(case_no=1;case_no<=t;case_no++){
		printf("Case %u:\n",case_no);
		scanf("%d",&n);
		for(k=1;k<=n;k++) parent[k] = k;
		for(int i=1;i<=n;i++){
			scanf("%d",&m);
			while(m--){
				scanf("%d",&k);
				parent[k] = i;
			}
		}
		scanf("%d",&q);
		while(q--){
			scanf("%d %d",&x,&y);
			printf("%d\n",lca(x,y));
		}
	}
    return 0;
}