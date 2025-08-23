#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int m, n;
struct point {
    int x, y;
};
static vector<vector<point>> land;
void bfs(bool ** map, int x, int y){
    queue<point> q;
    q.push({x, y});
    while(!q.empty()){
        point p = q.front();
        q.pop();
        if(p.x < 0 || p.y < 0 || p.x >= m || p.y >= n || !map[p.x][p.y]){
            continue;
        }
        map[p.x][p.y] = false;
        land.back().push_back(p);
        q.push({p.x - 1, p.y});
        q.push({p.x + 1, p.y});
        q.push({p.x, p.y - 1});
        q.push({p.x, p.y + 1});
    }
}
int main(){
    cin >> m >> n;
    bool **map = new bool*[m];
    for(int i = 0; i < m; i++) {
        map[i] = new bool[n];
        for(int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(map[i][j]) {
                land.push_back(vector<point>());
                bfs(map, i, j);
            }
        }
    }
    int num_lands = land.size();
    for(int i = 0; i < num_lands; i++){
        int ww = n, nn = m, ee = - 1, ss = - 1;
        for(point p : land[i]) {
            ww = min(ww, p.y);
            nn = min(nn, p.x);
            ee = max(ee, p.y);
            ss = max(ss, p.x);
        }
        cout << ww << " " << nn << " " << ee << " " << ss << " " << land[i].size() << "\n";
    }
}