#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(!(n % 3))cout << "YES\n";
        else cout << "NO\n";
    }
}