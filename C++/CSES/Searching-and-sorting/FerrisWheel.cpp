#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"


int main(){
     int n; ll x;
     cin>>n>>x;

     vi weights(n);

     for(int i=0;i<n;i++){
        cin>>weights[i];
     }

     sort(weights.begin(),weights.end());

     int i=0,j=n-1;
     int gondolas=0;
     while(i<=j){
        if (weights[i]+weights[j]<=x){
            gondolas++;
            i++,j--;
        }

        else if(weights[j]<=x){
            gondolas++;
            j--;
        }
     }

    cout<<gondolas<<nl;
    return 0;
}
