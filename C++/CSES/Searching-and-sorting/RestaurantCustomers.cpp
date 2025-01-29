#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"


int main(){
    vector<pair<ll,ll>> events;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll start,end;
        cin>>start>>end;
        events.push_back({start,1});
        events.push_back({end,-1});
    }

    sort(events.begin(),events.end());
    ll actualCustomers=0,maxCustomers=0;

    for(int i=0;i<events.size();i++){
        actualCustomers+=events[i].second;

        maxCustomers = max(actualCustomers,maxCustomers);
    }

    cout<<maxCustomers<<nl;

    return 0;
}
