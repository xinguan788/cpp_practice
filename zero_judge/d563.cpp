#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    long long ls = v[0], rs = v[n - 1];
    int lidx = 0, ridx = n - 1;
    int equal = 0;
    while(ridx >= 0 || lidx < n){
        if(ls == rs){
            equal++;
            ls += v[++lidx];
            rs += v[--ridx];
        }else if(ls < rs){
            ls += v[++lidx];
        }else if(ls > rs){
            rs += v[--ridx];
        }
    }
    cout << equal << "\n";
}