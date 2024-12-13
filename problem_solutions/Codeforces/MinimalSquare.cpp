#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int ans;
        if (a != b) {
            int min_ele = min(a, b), max_ele = max(a, b);
            ans = (2 * min_ele >= max_ele) ? (2 * min_ele) * (2 * min_ele) : max_ele * max_ele;
        } else {
            ans = 4 * (a * a);
        }
        cout << ans << "\n";
    }
    return 0;
}