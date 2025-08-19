#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m, n;
    string brand, color, question, order;
    while(cin >> m >> n){
        vector<string> brand(m);
        vector<string> color(m);
        for(int i = 0; i < m; i++){
            cin >> brand[i] >> color[i];
        }
        for(int i = 0; i < n; i++){
            cin >> question >> order;
            if(question == "brand"){
                for(int j = 0; j < m; j++){
                    if(brand[j] == order){
                        cout << brand[j] << " " << color[j] << "\n";
                    }
                }
            }else{
                for(int j = 0; j < m; j++){
                    if(color[j] == order){
                        cout << brand[j] << " " << color[j] << "\n";
                    }
                }
            }
        }
        cout << "\n";
    }
}