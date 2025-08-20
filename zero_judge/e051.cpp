#include<iostream>
#include<string>
using namespace std;
int main(){
    string voc;
    cin >> voc;
    int len = voc.length();
    for(int i = 0; i < len; i++){
        if(i == 0 || i == len - 1)cout << voc[i];
        else cout << "_";
    }
}