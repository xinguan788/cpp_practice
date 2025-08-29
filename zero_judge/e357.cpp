#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=e357

long long f(int n){
    if(n == 1)
        return 1;
    if(n & 1)
        return f(n - 1) + f(n + 1);
    else
        return f(n / 2);
}
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
}