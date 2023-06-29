#include <iostream>
#include <vector>
using namespace std;

void SegSieve(int l, int h) {
    // Step 1
    vector<bool> prime(h + 1, true);

    // Step 2
    for (int p = 2; p * p <= h; p++) {
        int sm = (l / p) * p;
        if (sm < l) {
            sm += p;
        }
        for (int i = sm; i <= h; i += p) {
            prime[i] = false;
        }
    }

    // Step 3: Print all prime numbers
    for (int i = l; i <= h; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    SegSieve(10, 30);
    return 0;
}
