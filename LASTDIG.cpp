#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
ll modular_pow(ll a,ll exp,ll mod){
	    ll ans=1;
while (exp>0) {
if (exp%2==1)
            ans=(ans*a)%mod;
	        exp=exp>>1;
	        a=(a*a)%mod;
}
return ans;
}
int main(){
ll t,a,b;
s(t);
while(t--){
        s(a);s(b);
    cout<<modular_pow(a,b,10)<<endl;
}
return 0;
}
 