#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> prefix(n + 1, 0);
    unordered_map<int, int> seen;
    seen[0] = 0; 

    for (int i = 1; i <= n; i++) {
        prefix[i] = (prefix[i - 1] + a[i - 1]) % k;
        if (prefix[i] == 0) {
            cout << i << "\n";
            for (int j = 1; j <= i; j++) cout << j << " ";
            return 0;
        }
        if (seen.count(prefix[i])) {
            int start = seen[prefix[i]] + 1;
            cout << i - start + 1 << "\n";
            for (int j = start; j <= i; j++) cout << j << " ";
            return 0;
        }

        seen[prefix[i]] = i;
    }

    return 0;
}
