#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;


int main(){
    bool seen_rice = false;
    string s;
    cin>>s;

    for(char c:s){
        if(c=='R'){
            seen_rice = true;
        }

        if(c=='M' && seen_rice){
            cout<<"Yes"<<nl;
            return 0;
        }
    }

    cout<<"No"<<nl;
return 0;
}
