#include<iostream>
using namespace std;
const int mod = 10007;
long long fpow(long long m, long long n){
    long long ret = 1;
    m %= mod;
    while(n){
        if(n & 1) {
            ret = (ret * m) % mod;
        }
        m = m * m % mod;
        n >>= 1;
    }
    return ret;
}
int main(){
    int m, n;
    cin >> m >> n;
    cout << fpow(m, n) << endl;
}