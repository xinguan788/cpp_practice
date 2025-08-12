#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin >> n){
        vector<int> team(n, 0);
        vector<int> player;
        int tn, tpn, p;
        cin >> tn >> tpn;
        team[0] = tpn;
        for(int i = 0; i < tpn; i++){
            cin >> p;
            player.push_back(p);
        }
        for(int i = 1; i < n; i++){
            cin >> tn >> tpn;
            team[i] = tpn + team[i - 1];
            for(int j = 0; j < tpn; j++){
                cin >> p;
                player.push_back(p);
            }
        }
        cin >> p;
        int idx = 0;
        while(player[idx] != p){
            idx++;
        }
        int teamIndex = 0;
        while(idx >= team[teamIndex]){
            teamIndex++;
        }
        cout << teamIndex + 1<< endl;
    }
}