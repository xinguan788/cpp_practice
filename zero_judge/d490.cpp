#include <iostream>
using namespace std;
int main(){
    long long m, n, x, y;
    cin >> m >> n;
    if(m > n){
        long long temp = m;
        m = n;
        n = temp;
    }
    if(m % 2 == 0)x = m;
    else x = m + 1;
    if(n % 2 == 0)y = n;
    else y = n - 1;
    if(m == n && m % 2 == 0){
        cout << m << endl;
    }else if(m == n && m % 2 != 0){
        cout << 0 << endl;
    }else if(x == y){
        cout << x << endl;
    }else{
        long long h = (y - x) / 2 + 1;
        cout << h * (x + y) / 2<< endl;
    }
}