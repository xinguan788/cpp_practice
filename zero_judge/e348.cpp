#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=e348

using namespace std;
int main(){
    string s1, s2, strgcd, s1s2, s2s1;
    int len1, len2, gcdlen;
    while(cin >> s1 >> s2){
        len1 = s1.size();
        len2 = s2.size();
        s1s2 = s1 + s2;
        s2s1 = s2 + s1;
        if(s1s2 == s2s1){
            gcdlen = __gcd(len1, len2);
            strgcd = s1.substr(0, gcdlen);
            cout << strgcd << "\n";
        }else cout << "= =\n";
    }
}
