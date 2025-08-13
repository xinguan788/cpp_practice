#include<iostream>
#include<string>
using namespace std;
int main(){
    string aton = "uzrmatifxopnhwvbslekycqjgd";
    string ntoa = "mjqhofawcpnsexdkvgtzblryui";
    int n, m;
    cin >> n;
    while(n--){
        cin >> m;
        string temp;
        int num = 0;
        bool isa = false;
        cin >> temp;
        if(temp <= "9"){
            cout << ntoa[stoi(temp) - 1];
        }else{
           num += aton.find(temp) + 1;
           isa = true;
        }
        for(int i = 1; i < m; i++){
            cin >> temp;
            if(isa){
                num += aton.find(temp) + 1;
            }else{
                cout << ntoa[stoi(temp) - 1];
            }
        }
        if(isa) cout << num;
        cout << "\n";
    }
}