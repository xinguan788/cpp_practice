#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int lu, ru, ld, rd, d;
    while(cin >> lu >> ru >> ld >> rd){
        
        if(lu == 0 && ru == 0 && ld == 0 && rd == 0) return 0;
        d = lu * rd - ru * ld;
        if(d == 0)cout << "cheat!\n";
        else{
            cout << fixed << setprecision(5) << (double)rd / d << " " 
                 << (double)-ru / d << "\n" 
                 << (double)-ld / d << " " 
                 << (double)lu / d << "\n";
        }
    }
}