#include<iostream>
using namespace std;
int main(){
    int dd;
    while(cin >> dd){
        int d = 1, sum = 0;
        int a50 = 1;
        for(int i = 0; i < 50; i++){
            sum += a50;
            a50 += d;
            d += dd;
        }
        cout << sum << '\n';
    }
    
}