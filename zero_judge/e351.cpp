#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=e351

using namespace std;

int main(){
    unsigned long long a, b, ans;
    while(cin >> a >> b){
        ans = 0;
        for(int i = 63; i >= 0; i--){
            if((a & (1ULL << i)) == (b & (1ULL << i)))
                ans += (a & (1ULL << i));
            else 
                break;
        }
        cout << ans << "\n";
    }
}
