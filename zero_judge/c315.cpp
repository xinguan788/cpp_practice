#include<iostream>
using namespace std;
int main(){
    int n, a, b, x = 0, y = 0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        switch(a % 4){
            case 0:
                y += b;
                break;
            case 1:
                x += b;
                break;
            case 2:
                y -= b;
                break;
            case 3:
                x -= b;
                break;
        }
    }
    cout << x << " " << y;
}