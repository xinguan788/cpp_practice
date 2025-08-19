#include<iostream>
using namespace std;
int main(){
    int n, m = 0;
    cin >> n;
    m += (n / 12) * 50 + 5 * (n % 12);
    cout << m;
}