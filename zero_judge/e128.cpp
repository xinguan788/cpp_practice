#include<iostream>
using namespace std;
int main(){
    int n, diff, x, y;
    while(cin >> n){
        int square = 1;
        if(!n)break;
        if(n == 1){
            cout << "1 1\n";
            continue;
        }
        while(square * square < n) square++;
        if(square % 2){
            x = 1;
            y = square;
            diff = square * square - n;
            for(int i = 1; i <= diff; i++){
                if(i < square)x++;
                else y--;
            }
        }else{
            x = square;
            y = 1;
            diff = square * square - n;
            for(int i = 1; i <= diff; i++){
                if(i < square)y++;
                else x--;
            }
        }
        cout << x << " " << y << "\n";
    }
}