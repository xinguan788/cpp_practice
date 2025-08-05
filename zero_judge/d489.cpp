#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int s = (a + b + c) / 2;
    int area2 = s * (s - a) * (s - b) * (s - c);
    cout << area2 << endl;
}