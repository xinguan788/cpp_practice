//讀到EOF
#include<iostream>
using namespace std;
int main(){
    int a, b, v;
    while(cin >> v >> a >> b){
        if(b){
            v = v | (1 << a);
        }else{
            v = v & ~(1 << a);
        }
        for(int i = 31; i >= 0; i--){
            cout << ((v >> i) & 1);
        }
        cout << endl;
    }
    return 0;
}