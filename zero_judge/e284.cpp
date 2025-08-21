#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin >> n){
        if(n && !(n & (n-1)))cout << "Yes\n";
        else cout << "No\n";
    }
}