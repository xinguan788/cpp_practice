#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    while(getline(cin, str)){
        int sum = 0;
        int idx = 0, len = str.length();
        while(idx < len){
            if(str[idx] == ' '){
                idx++;
                continue;
            }
            int num = 0;
            while(idx < len && str[idx] != ' '){
                num = num * 10 + (str[idx] - '0');
                idx++;
            }
            sum += num;
        }
        cout << sum << endl;
    }
}