#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string origin;
    cin >> origin;
    int len = origin.length();
    bool found = false;
    for(int i = 1; i <= len / 2; i++){
        if(len % i == 0) {
            multiset <string> substrings;
            string new_str = "";
            for(int j = 0; j < len; j += i) {
                substrings.insert(origin.substr(j, i));
            }
            for(auto it : substrings) {
                new_str += it;
            }
            if(new_str != origin) {
                cout << new_str << endl;
                found = true;
            }
        }
    }
    if(!found) {
        cout << "bomb!" << endl;
    }
}