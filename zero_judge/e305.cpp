#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    while(cin >> n){
        if(n == 0){
            cout << "0\n";
        }else{
            long numof0 = 0;
            while(n){
                numof0 += !(n&1);
                n >>= 1;
            }
            long num = pow(2, numof0);
            cout << num << "\n";
        }
    }
}