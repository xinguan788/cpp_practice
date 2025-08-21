#include<iostream>
#define ull unsigned long long
using namespace std;

struct matrix{
    ull m[2][2];
};
matrix mul(matrix a, matrix b){
    return matrix({{{a.m[0][0]*b.m[0][0] + a.m[0][1]*b.m[1][0], a.m[0][0]*b.m[0][1] + a.m[0][1]*b.m[1][1]},
                    {a.m[1][0]*b.m[0][0] + a.m[1][1]*b.m[1][0], a.m[1][0]*b.m[0][1] + a.m[1][1]*b.m[1][1]}}});
}
ull fb(int m){
    matrix id = {{{1, 0}, {0, 1}}};
    matrix mat = {{{1, 1}, {1, 0}}};
    while(m){
        if(m & 1){
            id = mul(id, mat);
        }
        m >>= 1;
        mat = mul(mat, mat);
    }
    return id.m[0][1];
}

ull gcd(ull a, ull b) {
    while (b) {
        ull t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
    ull m, n;
    while (cin >> m >> n) {
        int g = gcd(m, n);
        cout << fb(g) << "\n";
    }
    return 0;
}