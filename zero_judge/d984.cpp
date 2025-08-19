#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll a[3];
    char G, M;
    while(cin >> a[0] >> a[1] >> a[2]){
        ll g = max(a[0], max(a[1], a[2]));
        ll l = min(a[0], min(a[1], a[2]));
        ll m = a[0] + a[1] + a[2] - g - l;
        for(int i = 0; i < 3; i++){
            if(a[i] == g) G = ('A' + i);
            if(a[i] == m) M = ('A' + i);
        }
        cout << static_cast<char>((m + l > g)? M : G) << '\n';
    }
}