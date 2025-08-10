#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char f[110];
    while(cin >> f){
        bool isNegative = false;
        if(f[0] == '-'){
            isNegative = true;
            for(int i = 0; f[i] != '\0'; i++){
                f[i] = f[i + 1];
            }
        }
        int len = strlen(f);
        int idx = 0;
        for(; f[idx] != '\0'; idx++){
            if(f[idx] == '.')break;
        }
        if(idx == len){
            if(isNegative) cout << "-";
            cout << f << ".00\n";
        }else if(idx + 2 == len){
            if(isNegative) cout << "-";
            cout << f << "0\n";
        }else if(idx + 3 == len){
            if(isNegative) cout << "-";
            cout << f << "\n";
        }else{
            if(isNegative) cout << "-";
            if(f[idx + 3] >= '5'){
                f[idx + 3] = '\0';
                f[idx + 2]++;
                int c = 0;
                for(int i = idx + 2; i >= 0; i--){
                    if(f[i] == '.')continue;
                    if(f[i] + c > '9'){
                        f[i] = '0';
                        c = 1;
                    }else{
                        f[i] += c;
                        c = 0;
                    }
                }
                if(c == 1){
                    cout << "1";
                }
                cout << f << '\n';
            }else{
                f[idx + 3] == '\0';
                if(isNegative && f[3] == '0' && f[2] == '0' && f[0] == 0){
                    cout <<"0.00\n";
                }else{
                    if(isNegative) cout << "-";
                    cout << f << '\n';
                }
                
            }
        }
    }
}