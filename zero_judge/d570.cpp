#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    while(n > 0){
        cout << n <<"\n";
        n /= 10;
    }
}