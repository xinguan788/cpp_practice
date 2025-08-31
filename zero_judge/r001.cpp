#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=r001

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long i = 3, left, right;
    vector<int> leftEqualRight(100);
    for(int num = 1; num <= 100; ++num){
        while(true){
            left = (i + num) * (i + num + 1) * (2 * (i + num) + 1) / 6 - (i - 1) * i * (2 * (i - 1) + 1) / 6;
            right = (i + 2 * num) * (i + 2 * num + 1) * (2 * (i + 2 * num) + 1) / 6 - (i + num) * (i + num + 1) * (2 * (i + num) + 1) / 6;
            if(left == right){
                leftEqualRight[num - 1] = i;
                break;
            }else
                ++i;
        }
    }
    for(int i = 1; i <= 100; ++i){
        int start = leftEqualRight[i - 1];
        for(int j = 0; j < i; ++j){
            cout << start + j << "^2 + ";
        }
        cout << start + i << "^2 = ";
        for(int j = 1; j < i; ++j){
            cout << start + i + j << "^2 + ";
        }
        cout << start + i * 2 << "^2\n";
    }
}
