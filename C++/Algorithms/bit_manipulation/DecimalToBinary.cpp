#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define MOD 1000000007
#define nl "\n"

string decimalToBinary(int n) {
    if (n == 0) return "0"; 

    string res = "";
    while (n > 0) {
        if (n % 2 == 1) {
            res += "1";
        } else {
            res += "0";
        }
        n /= 2;
    }
    reverse(res.begin(), res.end()); 
    return res;
}

int binaryToDecimal(string s) {
    int num = 0, p2 = 1, length = s.size();

    for (int i = length - 1; i >= 0; i--) {
        if (s[i] == '1') {
            num += p2;
        } else if (s[i] != '0') {
            throw invalid_argument("Invalid binary string: " + s); // Handle invalid input
        }
        p2 *= 2;
    }

    return num;
}

int main() {
    int n;
    cin >> n;
    string b;
    cin >> b;

    try {
        string res = decimalToBinary(n);
        int num = binaryToDecimal(b);

        cout << "Decimal to Binary: " << res << nl;
        cout << "Binary to Decimal: " << num << nl;
    } catch (const invalid_argument& e) {
        cerr << e.what() << nl;
    }

    return 0;
}
