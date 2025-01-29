#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl "\n"


int main(){
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;
    if(sum%2!=0){
        cout<<"NO"<<nl;
    }
    else{
        cout<<"YES"<<nl;
        vector<ll>f;
        vector<ll>s;

        if (n%2==0){
            for(int i=0;i<n/2;i++){
                if(i%2==0){
                    f.push_back(i+1LL);
                    f.push_back(n-i);
                }

                else{
                    s.push_back(i+1LL);
                    s.push_back(n-i);

                }

            }
        }
        else{
                for(int i=0;i<(n-1)/2;i++){
                if(i%2==0){
                    f.push_back(i+1LL);
                    f.push_back(n-i-1);
                }

                else{
                    s.push_back(i+1LL);
                    s.push_back(n-i-1);

                }

            }

            if(f.size()>s.size()){
                s.push_back(n);
            }
            else{
                f.push_back(n);
            }

        }

        cout<<f.size()<<nl;
        for(ll i:f){
            cout<<i<<" ";
        }
        cout<<nl;
        cout<<s.size()<<nl;
        for(ll i:s){
            cout<<i<<" ";
        }
    }
    return 0;
}
