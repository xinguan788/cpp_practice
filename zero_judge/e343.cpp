#include<bits/stdc++.h>
using namespace std;
//https://zerojudge.tw/ShowProblem?problemid=e343

int main(){
    float kg, m;
    while(cin >> kg >> m){
        cout << fixed << setprecision(1) << (kg / (m * m)) << "\n";
    }
}