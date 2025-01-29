#include <iostream>
using namespace std;

int main() {
    long long n; // Using long long for larger numbers
    cin >> n;

    cout << n << endl;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        cout << n << endl;
    }

    return 0;
}
