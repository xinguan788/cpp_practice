#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct point {
    int x, y;
};
bool cmp(point a, point b) {
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}
int main(){
    int n, x, y;
    int cX = 0, cY = 0;
    cin >> n;
    while(n != 0){
        vector<point> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i].x >> vec[i].y;
            cX += vec[i].x;
            cY += vec[i].y;
        }
        cX *= 2;
        cX /= n;
        cY *= 2;
        cY /= n;
        sort(vec.begin(), vec.end(), cmp);
        bool f = true;
        for(int i = 0; i < n / 2; i++){
            if(vec[i].x + vec[n - i - 1].x != cX || vec[i].y + vec[n - i - 1].y != cY){
                cout << "no\n";
                f = false;
                break;
            }
        }
        if(f)cout << "yes\n";
        cin >> n;
    }
}