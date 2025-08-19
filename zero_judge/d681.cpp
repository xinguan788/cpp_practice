#include<iostream>
#include<string>
using namespace std;
void OR(string &str1, const string &str2){
    for(int i = 0; i < str1.length(); i++){
        if(str1[i] == '1' || str2[i] == '1'){
            str1[i] = '1';
        }else if(str1[i] == '0' && str2[i] == '0'){
            str1[i] = '0';
        }
    }
}
void AND(string &str1, const string &str2){
    for(int i = 0; i < str1.length(); i++){
        if(str1[i] == '0' || str2[i] == '0'){
            str1[i] = '0';
        }else if(str1[i] == '1' && str2[i] == '1'){
            str1[i] = '1';
        }
    }
}
string op(string str, string &ans){
    string x = "";
    bool first = true;
    int index = 0, len = str.length();
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            if(str[index] == '0' || str[index] == '1'){
                if(first){
                    first = false;
                    x = str.substr(index, 5);
                }
                ans += str.substr(index, 5);
            }else if(str[index] == 'o'){
                ans += "||";
                OR(x, str.substr(index + 3, 5));
            }else if(str[index] == 'a'){
                ans += "&&";
                AND(x, str.substr(index + 4, 5));
            }
            index = i + 1;
        }
    }
    return x;
}
int main(){
    string str, ans, result;
    while(getline(cin, str)){
        result = op(str, ans);
        cout << ans << " = " << result << endl;
        ans = "";
    }
}