#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"


int main(){
    int m=0,n=0;
    cin>>n>>m;

    vi prices(n);
    vi max_prices(m);
    set<pair<int,int>> sortedTickets;

    for(int i=0;i<n;i++){
        cin>>prices[i];
        sortedTickets.insert({prices[i],i});
    }

    for(int i=0;i<m;i++){
        cin>>max_prices[i];
    }

    for(int j=0;j<m;j++){
        auto match = sortedTickets.lower_bound({max_prices[j]+1,0});
        if(match==sortedTickets.begin()){
            cout<<-1<<nl;
        }

        else{
            match--;
            cout<<(*match).first<<nl;
            sortedTickets.erase(match);
        }

    }


    return 0;
}
