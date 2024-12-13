#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin >> n;
    
    if (n == 1) {
        int x;
        cin >> x;
        cout << 0 << endl;
        return 0;
    }
    
    vector<int> freq(4, 0);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        freq[x]++;
    }
    
    int max_freq = max({freq[1], freq[2], freq[3]});
    int ans = n - max_freq;
    
    cout << ans << endl;
    
    return 0;
}