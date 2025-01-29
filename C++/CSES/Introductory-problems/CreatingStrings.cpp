#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"


int main(){
    string s;
    cin>>s;
    vector<string> ans;
    sort(s.begin(),s.end());

    do{
        ans.push_back(s);
    }
    while(next_permutation(s.begin(),s.end()));

    cout<<ans.size()<<nl;
    for(auto &x : ans){
        cout<<x<<nl;
    }
    return 0;
}
