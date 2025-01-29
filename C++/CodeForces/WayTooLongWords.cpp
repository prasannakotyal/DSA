#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string x;
    while(n-->0){
        cin>>x;
        if (x.size()<=10) cout<<x<<"\n";
        else{
            int xlen = x.size();
            cout<<x[0]<<(xlen-2)<<x[xlen-1]<<"\n";
        }
    }
}