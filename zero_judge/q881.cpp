#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=q881

using namespace std;
int main(){
    long long a, b;
    double ans;
    while(cin >> a >> b){
        ans = a * a + b * b;
        ans -= (b * b / 2.0);
        ans -= (a * (a + b) / 2.0);
        ans -= (a * (a - b) / 2.0);
        cout << (int)ans << '\n';
    }
}