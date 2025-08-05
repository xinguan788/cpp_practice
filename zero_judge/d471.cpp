#include<iostream>
using namespace std;
void rec(int l, int *arr, int len){
    if(l == 0){
        for(int i = 0; i < len; i++){
            cout << arr[i];
        }
        cout << endl;
        return;
    }
    arr[len - l] = 0;
    rec(l - 1, arr, len);
    arr[len - l] = 1;
    rec(l - 1, arr, len);
}
int main(){
    int l;
    while(cin >> l){
        int *arr = new int[l];
        rec(l, arr, l);
    }
}