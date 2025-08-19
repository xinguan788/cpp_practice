#include<iostream>
#include<vector>

using namespace std;
long long tgcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    while(n != 0){
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long ans = arr[0], g;
        for(int i = 1; i < n; i++){
            g = tgcd(ans, arr[i]);
            ans *= arr[i];
            ans /= g;
        }
        cout << ans << "\n";
        cin >> n;
    }
}
