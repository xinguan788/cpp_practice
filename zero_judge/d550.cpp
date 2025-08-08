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

void merge(vector<vector<int>> &v, int front, int mid, int end){
    vector<vector<int>> temp;
    int i = front, j = mid + 1;
    while(i <= mid && j <= end){
        if(cmp(v[i], v[j])){
            temp.push_back(v[i]);
            i++;
        } else {
            temp.push_back(v[j]);
            j++;
        }
    }
    while(i <= mid) temp.push_back(v[i++]);
    while(j <= end) temp.push_back(v[j++]);
    for(int k = front; k <= end; k++) v[k] = temp[k - front];
}

void merge_sort(vector<vector<int>> &v, int front, int end){
    if(front >= end) return;
    int mid = (front + end) / 2;
    merge_sort(v, front, mid);
    merge_sort(v, mid + 1, end);
    merge(v, front, mid, end);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    merge_sort(v, 0, m - 1);
    for(auto &x : v){
        for(auto y : x){
            cout << y << " ";
        }
        cout << "\n";
    }

    return 0;
}
