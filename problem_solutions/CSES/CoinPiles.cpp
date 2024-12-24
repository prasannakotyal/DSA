#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1e9+7;
#define nl "\n"


int main(){
    int n;
    cin>>n;
    ll a,b;
    

    while(n--){
        cin>>a>>b;
        if((a+b)%3==0 && min(a,b)*2>=max(a,b)){
            cout<<"YES"<<nl;
        }
        else cout<<"NO"<<nl;
    }
    return 0;
}
