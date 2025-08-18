#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    vector<string> v;
    while(n--){
        getline(cin, s);
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for(auto it : v) cout << it << "\n";
}