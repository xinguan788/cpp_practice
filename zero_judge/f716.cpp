#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=f716

using namespace std;
int main(){
    int x, max = 0, min = INT_MAX;
    while(cin >> x){
        max = std::max(max, x);
        min = std::min(min, x);
    }
    cout << min << " " << max - min << endl;
}