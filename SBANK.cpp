#include<iostream>
#include<set>
#include<map>
#include<string>
#include<cstdio>
#define ll long long int
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
using namespace std;
 
int main()
{
    ll t;
    s(t);
    while(t--)
    {
 
     map<string,ll> a;
     map<string,ll>::iterator it;
     char ch[100];
 
            ll n;
      for( scanf("%lld\n", &n); n; n--){
            gets(ch);
            a[(string)ch]++;
        }
        for( it = a.begin(); it != a.end(); it++){
            printf("%s %lld\n", it->first.c_str(), it->second);
        }
     cout<<endl;
    }
    return 0;
}
 