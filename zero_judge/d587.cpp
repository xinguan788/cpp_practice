#include<iostream>
using namespace std;
int main(){
    int n, o = 0, t = 0, th = 0, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x == 1) o++;
        else if(x == 2) t++;
        else if(x == 3) th++;
    }
    while(o--){
        cout << "1 ";
    }
    while(t--){
        cout << "2 ";
    }
    while(th--){
        cout << "3 ";
    }
}