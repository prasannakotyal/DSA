#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl "\n"


int main(){
    int n;
    cin>>n;
    vi nums(n);
    ll count=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    for(int j=1;j<n;j++){
        if(nums[j]<nums[j-1]){
            count+=nums[j-1]-nums[j];
            nums[j]=nums[j-1];
        }
    }

    cout<<count<<nl;
    return 0;
}
