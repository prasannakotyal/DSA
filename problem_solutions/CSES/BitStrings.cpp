#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl "\n"
const ll mod = 1e9 + 7;

ll binary_exponentiation(ll base, ll exp){
    ll ans=1;
    while(exp>0){
        if(exp&1LL){
            ans = (ans*base)%mod;
        }
        
        base = (base*base)%mod;
        exp>>=1;
    }
    return ans;
}

int main(){
    ll n;
    cin>>n;
    cout<<binary_exponentiation(2,n)<<nl;
    return 0;
}
