#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"

void solve(){
    string s;
    cin>>s;

    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            cout<<1<<nl;
            return;
        }
    }

    cout<<s.size()<<nl;
}


int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
}
    return 0;
}
