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
ll t=1;
cin>>t;
while(t--)
{   ll y,x,val=0;
    cin>>y>>x;

    if(y==x){
        cout<<(y*y)-(y-1)<<nl;
        continue;
    }
    else{
        val = max(y,x);
        val = val*val - (val-1);

        if(y<x){
            if(x%2!=0){
                val+=(x-y);
            }

            else{
                val-=(x-y);
            }
        }

        else{
            if(y%2!=0){
                val-=(y-x);
            }
            else{
                val+=(y-x);
            }
        }
        cout<<val<<nl;
    }
}
return 0;
}
