#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"

int n;
vector<ll>apples;

ll minimal(int index,ll sum1,ll sum2){
    if (index==n){
        return abs(sum1-sum2);
    }

    return min(
        minimal(index+1,sum1+apples[index],sum2),
        minimal(index+1,sum1,sum2+apples[index])
        );
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        ll w=0;
        cin>>w;
        apples.push_back(w);
    }
    ll _min;
    _min = minimal(0,0,0);
    cout<<_min<<nl;

    return 0;
}
