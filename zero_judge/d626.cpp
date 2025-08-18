#include<iostream>
using namespace std;
int n;
void bfs(char ** map, int x, int y){
    if(x < 0 || x >= n || y < 0 || y >= n) return;
    if(map[x][y] == '+') return;
    map[x][y] = '+';
    bfs(map, x + 1, y);
    bfs(map, x - 1, y);
    bfs(map, x, y + 1);
    bfs(map, x, y - 1);
}
int main(){
    int x, y;
    cin >> n;
    char **c = new char*[n];
    for(int i = 0; i < n; i++){
        c[i] = new char[n + 1];
        cin >> c[i];
    }
    cin >> x >> y;
    bfs(c, x, y);
    for(int i = 0; i < n; i++){
        cout << c[i] << "\n";
    }
    return 0;
}