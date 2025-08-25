#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, i = 0, a, b;
    long long max_distance = 0;
    cin >> n;
    vector<pair<int,int>> v(n);
    while(n--){
        cin >> v[i].first >> v[i++].second;
    }
    for(int j = 0; j < i - 1; j++){
        for(int k = j + 1; k < i; k++){
            if((v[j].first - v[k].first) * (v[j].first - v[k].first) + 
            (v[j].second - v[k].second) * (v[j].second - v[k].second) > max_distance){
                max_distance = (v[j].first - v[k].first) * (v[j].first - v[k].first) + 
                (v[j].second - v[k].second) * (v[j].second - v[k].second);

                a = j;
                b = k;
            }
        }
    }
    cout << a << " " << b;
}