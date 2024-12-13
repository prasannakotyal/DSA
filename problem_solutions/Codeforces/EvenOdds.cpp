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
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;


int main(){
ll t=1;
cin>>t;
while(t--)
{   ll n,k,div = 0,ans = 0;
    cin>>n>>k;

    div = (n + 1) / 2;
    if(k <= div){
        ans = (k * 2) - 1;
    }
    else{
        ans = (k - div) * 2;
    }
    cout<<ans;nl;
}
return 0;
}
