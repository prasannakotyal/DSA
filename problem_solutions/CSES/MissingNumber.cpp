#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    // Using XOR method
    int xor_result = 0;

    for (int i = 0; i < n - 1; i++) {
        xor_result ^= nums[i];
        xor_result ^= (i + 1);
    }
    xor_result ^= n;

    cout << xor_result << endl;
    return 0;
}
