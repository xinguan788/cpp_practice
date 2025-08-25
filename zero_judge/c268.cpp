#include <bits/stdc++.h>
using namespace std;

static char inbuf[1 << 20];
static size_t inidx = 0, nbyte = 0;

inline char readC() {
    if (inidx >= nbyte) {
        inidx = 0;
        nbyte = fread(inbuf, 1, sizeof(inbuf), stdin);
        if (nbyte == 0) return EOF;
    }
    return inbuf[inidx++];
}

inline int readI() {
    int i = 0;
    char c = readC();
    while (c < '0' || c > '9') {
        if (c == EOF) return -1;
        c = readC();
    }
    do {
        i = i * 10 + (c - '0');
        c = readC();
    } while (c >= '0' && c <= '9');
    return i;
}

inline long long readLL() {
    long long i = 0;
    char c = readC();
    while (c < '0' || c > '9') {
        if (c == EOF) return -1;
        c = readC();
    }
    do {
        i = i * 10 + (c - '0');
        c = readC();
    } while (c >= '0' && c <= '9');
    return i;
}

int main() {
    int T = readI();
    vector<long long> fib = {1,1};
    while (fib.back() <= 1000000000) fib.push_back(fib.back() + fib[fib.size()-2]);
    int fib_limit = fib.size() - 1;

    while (T--) {
        int n = readI();
        if (n > fib_limit) {
            putchar('Y'); putchar('E'); putchar('S'); putchar('\n');
            for (int i = 0; i < n; i++) readLL();
            continue;
        }

        vector<long long> a(n);
        for (int i = 0; i < n; i++) a[i] = readLL();
        bool can = false;
        for (int i = 0; i < n && !can; i++) {
            for (int j = i+1; j < n && !can; j++) {
                for (int k = j+1; k < n; k++) {
                    long long x = a[i], y = a[j], z = a[k];
                    long long mx = max({x,y,z});
                    long long mn1 = min({x,y,z});
                    long long mn2 = x + y + z - mx - mn1;
                    if (mn1 + mn2 > mx) {
                        can = true;
                        break;
                    }
                }
            }
        }
        if (can) putchar('Y'), putchar('E'), putchar('S'), putchar('\n');
        else putchar('N'), putchar('O'), putchar('\n');
    }
}
