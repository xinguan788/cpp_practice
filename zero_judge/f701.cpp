#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=f701

using namespace std;
int main(){
    string s, conj;
    getline(cin, s);
    getline(cin, conj);
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == ' '){
            cout << ' ' << conj << ' ';
        }else{
            cout << s[i];
        }
    }
}