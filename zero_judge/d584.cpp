#include<iostream>
using namespace std;
int main(){
    int n, lv;
    while(cin >> n >> lv){
        int sp = 1;
        if(n == 0)cout << "0\n";
        else{
            if(lv > 10){
                sp += (lv - 10) * 3;
                if(lv >= 120)sp += 5;
                else if(lv >= 70)sp += 2;
                else if(lv >= 30)sp += 1;
                if(n == 2)sp += 6;
            }else if(n == 2)sp += (lv - 8) * 3;
            cout << sp << "\n";
        }
    }
}