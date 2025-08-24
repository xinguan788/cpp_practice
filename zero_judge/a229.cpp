#include <bits/stdc++.h>
using namespace std;
int n;
static char outbuf[1 << 20];
static char inbuf[1 << 20];
size_t outidx = 0, inidx = 0, nbyte = 0;

inline char readC(){
    if(inidx >= nbyte) {
        inidx = 0;
        nbyte = fread(inbuf, 1, sizeof(inbuf), stdin);
    }
    return nbyte ? inbuf[inidx++] : EOF;
}
inline bool readI(int &x) {
    char c;
    while ((c = readC()) != EOF && (c < '0' || c > '9'));
    if (c == EOF) return false;
    x = c - '0';
    while ((c = readC()) != EOF && (c >= '0' && c <= '9')) x = x * 10 + (c - '0');
    return true;
}
inline void flushout() {
    for(int i = 0; i < outidx; i++) putchar(outbuf[i]);
    outidx = 0;
}

inline void pushchar(char c) {
    if (outidx >= (1 << 20)) flushout();
    outbuf[outidx++] = c;
}

inline void pushline(const char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (outidx >= (1 << 20)) flushout();
        outbuf[outidx++] = s[i];
    }
    pushchar('\n');
}

void generate(char *str, int left, int right, int idx) {
    if (right == n) {
        str[idx] = '\0';
        pushline(str);
        return;
    }
    if (left < n) {
        str[idx] = '(';
        generate(str, left + 1, right, idx + 1);
    }
    if (right < left) {
        str[idx] = ')';
        generate(str, left, right + 1, idx + 1);
    }
}

int main() {
    while (readI(n)) {
        char str[30];
        generate(str, 0, 0, 0);
        pushchar('\n');
    }
    flushout();
}
