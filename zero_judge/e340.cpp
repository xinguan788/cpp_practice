#include<bits/stdc++.h>
using namespace std;
//https://zerojudge.tw/ShowProblem?problemid=e340

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, pre = 0, temp;
    while(cin >> n){
        while(n--){
            cin >> temp;
            cout << temp - pre << " ";
            pre = temp;
        }
        cout << "\n";
    }
}