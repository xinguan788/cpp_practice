#include<bits/stdc++.h>
using namespace std;
//https://zerojudge.tw/ShowProblem?problemid=e345

int main(){
    int n;
    while(cin >> n){
        if((n != 0) && (n % 9 == 0))
            cout << 9 << "\n";
        else 
            cout << n % 9 << "\n"; 
    }
}       