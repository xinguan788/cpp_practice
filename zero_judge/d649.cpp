#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n != 0){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n - i; j++){
                cout << "_";
            }
            for(int j = 1; j <= i; j++){
                cout << "+";
            }
            cout << endl;
        }
        cin >> n;
    }
}