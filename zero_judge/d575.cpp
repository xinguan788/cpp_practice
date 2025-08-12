#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long j_x, j_y, c_x, c_y, range;
    while(cin >> j_x >> j_y >> c_x >> c_y >> range){
        if(c_y > j_y + range || c_y < j_y - range || c_x > j_x + range || c_x < j_x - range){
            cout << "alive\n";
        }else{
            int d;
            if(j_y <= c_y){
                d = j_y + range - c_y;
            }else{
                d =  c_y - (j_y - range);
            }
            if(j_x + d < c_x || j_x - d > c_x){
                cout << "alive\n";
            }else{
                cout << "die\n";
            }
        }
    }

}