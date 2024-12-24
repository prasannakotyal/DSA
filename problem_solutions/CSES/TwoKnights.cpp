#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl "\n"


int main(){
    int n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans = ((i*i)*(i*i-1))/2 - (4*(i-1)*(i-2));
        cout<<ans<<nl;
    }
    return 0;
}
