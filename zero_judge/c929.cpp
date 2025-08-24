#include<iostream>
#include<string>
using namespace std;
int main(){
    string str2, str3;
    while(getline(cin, str2)){
        getline(cin, str3);
        size_t idx1 = 0, idx2 = 0;
        while(idx1 < str3.size()){
            idx2 = str3.find(str2, idx1);
            if(idx2 == string::npos) break;
            cout << str3.substr(idx1, idx2 - idx1) << "\n";
            idx1 = idx2 + str2.size();
        }
        cout << str3.substr(idx1) << "\n";
    }
}
