#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ridx = 0, lidx = n - 1;
        bool rs = true;
        while(n){
            if(rs){
                for(int i = ridx; i <= lidx; i++){
                    cout << v[i] << " ";
                }
                cout << "\n";
                ridx++;
                rs = false;
            }else{
                for(int i = lidx; i >= ridx; i--){
                    cout << v[i] << " ";
                }
                cout << "\n";
                lidx--;
                rs = true;
            }
            n--;
        }
    }
}