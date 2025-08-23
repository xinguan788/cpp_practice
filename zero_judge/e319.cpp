#define _GLIBCXX_IOSTREAM 1
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    scanf("%d", &N);

    int ones = 0, twos = 0;
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        twos |= ones & x;
        ones ^= x;
        int threes = ones & twos;
        ones &= ~threes;
        twos &= ~threes;
    }

    printf("%d\n", ones);
    return 0;
}