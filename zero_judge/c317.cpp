#include<iostream>
using namespace std;
int main(){
    int n, x, a, b;
    cin >> n;
    while(n--){
        bool found = true;
        int na, nb = 0;
        cin >> x >> a >> b;
        na = x / a;
        while((a * na + b * nb) <= x && na >= 0){
            if((a * na + b * nb) == x){
                cout << na + nb << "\n";
                found = false;
                break;
            }
            ++nb;
            while((a * na + b * nb) > x)--na;
        }
        if(found)cout << "-1\n";
    }
}
