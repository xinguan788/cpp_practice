#include <bits/stdc++.h>
using namespace std;
/*
static char inbuf[1 << 20];
static char outbuf[1 << 20];
int inidx = 0, nbyte = 0, outidx = 0;

inline char readC() {
    if (inidx == nbyte) {
        nbyte = fread_unlocked(inbuf, 1, sizeof(inbuf), stdin);
        inidx = 0;
    }
    return inidx < nbyte ? inbuf[inidx++] : EOF;
}

inline bool readU(unsigned int &a) {
    a = 0;
    char c;
    do {
        c = readC();
        if (c == EOF) return false;
    } while ((unsigned)(c - '0') > 9);
    do {
        a = a * 10 + (c - '0');
        c = readC();
    } while ((unsigned)(c - '0') < 10);
    return true;
}

inline void flushOutput() {
    for (int i = 0; i < outidx; i++) putchar_unlocked(outbuf[i]);
    outidx = 0;
}

inline void writeU(unsigned int x) {
    char tmp[12];
    int len = 0;
    do tmp[len++] = x % 10 + '0', x /= 10;
    while (x);
    while (len--) outbuf[outidx++] = tmp[len];
    outbuf[outidx++] = '\n';
    if (outidx > (1 << 20)) flushOutput();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unsigned int a, b;
    while (readU(a) && readU(b)) {
        writeU(a + b);
    }
    flushOutput();
}
*/