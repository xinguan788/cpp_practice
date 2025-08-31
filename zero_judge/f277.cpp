#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=f277

using namespace std;
struct person{
    string name;
    int classs;
    int num;
    string pi;
};
bool cmp(const person &a, const person &b) {
    if(a.classs == b.classs) {
        return a.num < b.num;
    }
    return a.classs < b.classs;
}
int main(){
    int n;
    cin >> n;
    vector<person> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].name >> v[i].classs >> v[i].num >> v[i].pi;
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(const auto &p : v) {
        cout << p.classs << " " << p.num << " " << p.name << "\n";
        cout << p.pi << "\n";
    }
}