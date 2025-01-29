#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl "\n"


int main(){
    int n;
    cin>>n;

    if(n>1 && n<4){
        cout<<"NO SOLUTION"<<nl;
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
    return 0;
}
