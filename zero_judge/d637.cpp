#include<iostream>
#include<vector>
using namespace std;
const int W = 100;
int main(){
    int n;
    cin >> n;
    vector<int> w(n + 1, 0), v(n + 1, 0);
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for(int i = 1; i <= n; i++){
        cin >> w[i] >> v[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= W; j++){
            if(j >= w[i]){
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][W] << endl;
}