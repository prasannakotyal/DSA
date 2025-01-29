#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"


int main(){
    int n,m; ll k;
    cin>>n>>m>>k;

    vi desired_size(n),actual_size(m);


    for(int i=0;i<n;i++){
        cin>>desired_size[i];
        
    }
    for(int i=0;i<m;i++){
        cin>>actual_size[i];
        
    }

    int i=0,j=0;
    int count=0;

    sort(desired_size.begin(), desired_size.end());
    sort(actual_size.begin(), actual_size.end());

    while(i<n && j<m){
        if (abs(desired_size[i]-actual_size[j])<=k){
            count++;
            i++;
            j++;
        }

        else if (desired_size[i]>actual_size[j]+k)
        {
            j++;
        }

        else{
            i++;
        }
        
    }

  

    cout<<count<<nl;
    
    return 0;
}
