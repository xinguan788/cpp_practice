#include<iostream>
#include<string>
using namespace std;
int main(){
    string ans, guess;
    int n, A, B;
    cin >> ans;
    cin >> n;
    while(n--){
        A = B = 0;
        cin >> guess;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(ans[i] == guess[j] && i == j){
                    A++;
                    break;
                }else if(ans[i] == guess[j] && i != j){
                    B++;
                    break;
                }
            }
        }
        cout << A << "A" << B << "B\n";
    }
}