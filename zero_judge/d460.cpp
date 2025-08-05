#include<iostream>
using namespace std;
int main(){
    int y;
    cin >> y;
    cout << ((y <= 5) ? 0 : ((y <= 11) ? 590 : ((y <= 17) ? 790 : ((y <= 59) ? 890 : 399))));
    return 0;
}