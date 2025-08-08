#include<iostream>
using namespace std;
bool is_lunar_year(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    return false;
}
int main(){
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (is_lunar_year(i)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}