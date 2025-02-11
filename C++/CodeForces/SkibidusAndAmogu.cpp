#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"


int main(){
    int n;
    cin>>n;
    vector<string> s(n);

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(auto &s_val:s){
        s_val.replace(s_val.size() - 2, 2, "i");

    }

    for(auto &s_val:s){
        cout<<s_val<<nl;
    }
    return 0;
}
