#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007;
#define nl "\n"


int main(){
    string s;
    cin>>s;

    map<char,int> mp;
    for(char ch : s){
        mp[ch]++;
    }
    
    string mid="";
    string begin="";
    int odd_count=0;
    for(auto& pair:mp){
        if(pair.second%2==1){
            odd_count+=1;
            mid+=pair.first;
        }
        begin+=string(pair.second/2,pair.first);
    }

    if(odd_count>1){
        cout<<"NO SOLUTION"<<nl;
        return 0;
    }

    string end = begin;
    reverse(end.begin(),end.end());

    string result = begin;
    if(odd_count==1){
        result+=mid;
    }
    result+=end;

    cout<<result<<nl;
    return 0;
}
