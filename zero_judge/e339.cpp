#include<bits/stdc++.h>
using namespace std;
//https://zerojudge.tw/ShowProblem?problemid=e339

int main(){
    long long int n, sum = 0, temp;
    while(cin >> n){
        while(n--){
            cin >> temp;
            sum += temp;
            cout << sum << " ";
        }
        cout << "\n";
    }
}