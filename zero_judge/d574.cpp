#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    char *str = new char[n + 1];
    cin >> str;
    string result = "";
    int continuous = 1;
    char c = str[0];
    for(int i = 1; i < n; i++){
        if(str[i] == c) continuous++;
        else{
            result += to_string(continuous) + c;
            continuous = 1;
            c = str[i];
        }
    }
    result += to_string(continuous) + c;
    if(result.length() > n) {
        cout << str << endl;
    } else {
        cout << result << endl;
    }
}