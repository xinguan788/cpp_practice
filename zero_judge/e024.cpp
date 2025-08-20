#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    long long n, m;
    const long long BASE = 1000000000;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        vector<long long> x(1, 1);
        for (long long a = 0; a < m; a++) {
            long long carry = 0;
            for (size_t i = 0; i < x.size(); i++) {
                long long prod = x[i] * n + carry;
                x[i] = prod % BASE;
                carry = prod / BASE;
            }
            if (carry > 0) x.push_back(carry);
        }
        for (int i = x.size() - 1; i >= 0; i--) {
            if (i != x.size() - 1)
                cout << setfill('0') << setw(9) << x[i];
            else
                cout << x[i];
        }
        cout << endl;
    }

    return 0;
}
