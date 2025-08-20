#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct time{
    int m, s;
};
bool cmp(struct time t1, struct time t2){
    return t1.m < t2.m || (t1.m == t2.m && t1.s < t2.s);
}
int main(){
    int n, laps, m, s;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Track " << i << ":\n";
        cin >> laps;
        vector<struct time> times(laps);
        int sec = 0;
        for(int j = 0; j < laps; j++){
            cin >> m >> s;
            times[j].m = m;
            times[j].s = s;
            sec += (m * 60 + s);
        }
        sort(times.begin(), times.end(), cmp);
        cout << "Best Lap: " << times[0].m << " minute(s) " << times[0].s << " second(s).\n";
        cout << "Average: " << sec / laps / 60 << " minute(s) " << sec / laps % 60 << " second(s).\n";
        cout << "\n";
    }
}