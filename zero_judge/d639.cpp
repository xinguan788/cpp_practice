#include<iostream>
using namespace std;
struct matrix{
    int m[3][3];
};
matrix operator*(const matrix& m1, const matrix& m2) {
    matrix result = {{{0}}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                result.m[i][j] = (result.m[i][j] + m1.m[i][k] * m2.m[k][j]) % 10007;
            }
        }
    }
    return result;
}
matrix pow(matrix m, int n) {
    matrix result = {{{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}};
    while(n > 0) {
        if(n % 2 == 1) {
            result = result * m;
        }
        m = m * m;
        n /= 2;
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    matrix A = {{{1, 1, 1}, {1, 0, 0}, {0, 1, 0}}};
    if(n <= 3)cout << 1;
    else{
        matrix m = pow(A, n - 3);
        cout << (m.m[0][0] + m.m[0][1] + m.m[0][2]) % 10007 << endl;
    }
    return 0;
}
