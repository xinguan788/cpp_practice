#include <iostream>
#include <vector>
using namespace std;

bool cmp(const vector<int> &a, const vector<int> &b){
    int s = a.size();
    for(int i = 0; i < s; i++){
        if(a[i] != b[i]){
            return a[i] < b[i];
        }
    }
    return false;
}
vector<vector<int>> qs(vector<vector<int>> v){
    int s = v.size();
    if(s <= 1) return v;

    vector<int> pivot = v[s - 1];
    vector<vector<int>> less, greater;
    for(int i = 0; i < s - 1; i++){
        if(cmp(v[i], pivot)){
            less.push_back(v[i]);
        } else {
            greater.push_back(v[i]);
        }
    }

    less = qs(less);
    greater = qs(greater);

    vector<vector<int>> res;
    res.insert(res.end(), less.begin(), less.end());
    res.push_back(pivot);
    res.insert(res.end(), greater.begin(), greater.end());

    return res;
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    v = qs(v);

    for(auto &x : v){
        for(auto y : x){
            cout << y << " ";
        }
        cout << "\n";
    }

    return 0;
}
