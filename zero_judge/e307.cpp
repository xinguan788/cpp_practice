#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    const int BUF_SIZE = 1024 * 1024;
    char buf[BUF_SIZE];
    int numOfSpaces = 0;

    while (true) {
        size_t n = fread_unlocked(buf, 1, BUF_SIZE, stdin);
        if (n == 0) break;

        for (size_t i = 0; i < n; i++) {
            if (buf[i] == ' ') {
                numOfSpaces++;
            } else {
                if (numOfSpaces & 1) putchar_unlocked(' ');
                putchar_unlocked(buf[i]);
                numOfSpaces = 0;
            }
        }
    }
    if (numOfSpaces & 1) putchar(' ');

    return 0;
}
*/