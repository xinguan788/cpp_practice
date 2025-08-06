#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b){
        swap(a, b);
    }
    if(b > c){
        swap(b, c);
    }
    if(a * a + b * b == c * c){
        cout << "right triangle" << endl;
    }else if(a * a + b * b < c * c){
        cout << "obtuse triangle" << endl;
    }else{
        cout << "acute triangle" << endl;
    }
}