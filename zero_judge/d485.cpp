#include <iostream>
using namespace std;
int main(){
    int m, n, num;
    cin >> m >> n;
    if((n - m) == 0){
        if(n % 2 == 0){
            cout << "1";
        } else {
            cout << "0";
        }
    }else{
        if(((n - m) % 2 == 0) && (n % 2 == 0)){
            num = (n - m) / 2 + 1;
        }else if(((n - m) % 2 == 0) && (n % 2 == 1)){
            num = (n - m) / 2;
        }else if(((n - m) % 2 == 1)){
            num = (n - m + 1) / 2;
        }
        if(num < 0){
            cout << -num;
        } else {
            cout << num;
        }
    }
}