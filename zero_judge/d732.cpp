#include<iostream>
#include<vector>
using namespace std;
int n;
int binary_search(vector<int>& a, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == x) return mid + 1;
        else if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}
int main(){
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    while(m--){
        cin >> x;
        cout << binary_search(a, x)<< endl;
    }
}