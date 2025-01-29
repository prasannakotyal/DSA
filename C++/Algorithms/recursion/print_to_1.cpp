#include <bits/stdc++.h>
using namespace std;

void print_to_n(int n) {
    if (n == 1) { 
        cout << n << " "; // Print 1 for the base case
        return;           // Stop recursion
    }
    cout << n << " ";      // Print current number
    print_to_n(n - 1);     // Recursive call

}

int main() {
    int n;
    cin >> n;

    if (n >= 1) {          // Ensure `n` is positive
        print_to_n(n);
    } else {
        cout << "Input must be a positive integer." << endl;
    }

    return 0;
}
