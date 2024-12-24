#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"

void towerOfHanoi(int n,int start,int end){
    if (n==1){
        cout<<start<<" "<<end<<nl;
    }
    else{
        int other = 6-(start+end);
        towerOfHanoi(n-1,start,other);
        cout<<start<<" "<<end<<nl;
        towerOfHanoi(n-1,other,end);
    }
}

int main(){
    int n;
    cin >> n; 
    cout << (1 << n) - 1 << nl; 
    towerOfHanoi(n, 1, 3); 
    return 0;
}
