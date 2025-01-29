#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl "\n"


int main() {
    string s;
    cin >> s;
    int max_val = 1, strlen = 1; //
    
    unordered_map<char, int> mp;

for(int i=1;i<s.size();i++){
    if(s[i]==s[i-1]){
        strlen++;
    }
    else{
        max_val = max(strlen,max_val);
        strlen=1;
    }
}

max_val = max(strlen,max_val);
cout<<max_val<<nl;
    return 0;
}
