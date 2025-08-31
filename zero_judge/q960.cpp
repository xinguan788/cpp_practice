#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=q960

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, AC2;
    while(cin >> a >> b){
        AC2 = 4 * a * a - b * b;
        //x√y
        int x = 1;
        for(int i = 2; i * i <= AC2; ++i){
            while(AC2 % (i * i) == 0){
                AC2 /= (i * i);
                x *= i;
            }
        }
        if(AC2 == 1)
            cout << x << '\n';
        else if(x == 1)
            cout << "√" << AC2 << '\n';
        else
            cout << x << "√" << AC2 << '\n';
    }
}
