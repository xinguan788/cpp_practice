#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first || (a.first == b.first && a.second < b.second);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, num = 0;
    while(cin >> n){
        int Dominate_point = 0;
        vector<pair<int, int>> v(n);
        vector<int> ans;
        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < n; i++){
            int y = v[i].second;
            bool x = true;
            for(int j = i + 1; j < n; j++){
                if(v[j].second >= y){
                    x = false;
                    break;
                }
            }
            if(x){
                Dominate_point++;
                ans.push_back(i);
            }
        }
        cout << "Case " << ++num << ":\n";
        cout << "Dominate Point: " << Dominate_point << "\n";
        for(int i = 0; i < ans.size(); i++){
            cout << "(" << v[ans[i]].first << "," << v[ans[i]].second << ")\n";
        }
    }
}