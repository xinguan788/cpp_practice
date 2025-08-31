#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=f717

using namespace std;
int main(){
    long long n, sum = 0;
    vector<long long> v;
    while(cin >> n) {
        v.push_back(n);
        sum += n;
    }
    if(sum % v.size() == 0)
        cout << v.size();
    else
        cout << sum % v.size();

}