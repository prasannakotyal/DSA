#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1e9+7;
#define nl "\n"


int main(){
    ll n;
    cin>>n;
    ll count = 0;
    for(int i=5;n/i>=1;i*=5){
        count+=n/i;
    }
    cout<<count<<nl;
    return 0;
}
