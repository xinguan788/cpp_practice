#include <iostream>
using namespace std;
int main(){
    int a, b, c, p = 0;
    for(int i = 0; i < 5; i++){
        cin >> a >> b >> c;
        if(a > b){
            swap(a, b);
        }
        if(b > c){
            swap(b, c);
        }
        if(a + b > c)p++;
    }

    cout << p << endl;
    return 0;
}