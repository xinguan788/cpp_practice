#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, online = 0, maxOnline = 0;
    cin >> n;
    vector<int> inTime(n);
    vector<int> outTime(n);
    for(int i = 0; i < n; ++i){
        cin >> inTime[i] >> outTime[i];
    }
    sort(inTime.begin(), inTime.end());
    sort(outTime.begin(), outTime.end());
    int inIdx = 0, outIdx = 0;
    while(inIdx < n && outIdx < n){
        if(inTime[inIdx] >= outTime[outIdx]){
            --online;
            ++outIdx;
        } else {
            ++online;
            ++inIdx;
            maxOnline = max(maxOnline, online);
        }
    }
    cout << maxOnline;
}