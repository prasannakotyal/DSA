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
    set<int> uniqueVals;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        uniqueVals.insert(x);
    }

    cout<<uniqueVals.size()<<nl;
    return 0;
}
