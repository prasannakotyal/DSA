#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"

bool stringMatch(string s,string p){
    int n=s.length();
    int m=p.length();

    for(int i=0;i<n;i++){
        if(s[i]==p[0]){
            int j=i,k=0;
            while(j<n && k<m && s[j]==p[k]){
                j++;
                k++;
            }

            if(k==m){
                return true;
            }
        }

        return false;
    }


}

int main(){
    bool res = stringMatch("prasanna","prasana");

    cout<<res<<nl;
    return 0;
}
