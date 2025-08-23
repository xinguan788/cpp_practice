#include<iostream>
#include<stack>
using namespace std;
int main(){
    int a, b;
    while(cin >> a >> b){
        long long k = 1;
        stack<bool> s;
        while(a != b){
            if(a > b){
                a -= b;
                s.push(true);
            }else{
                int temp = b;
                b = a;
                a = temp;
                s.push(false);
            }
        }
        size_t size = s.size();
        while(size--){
            if(s.top())k *= 2;
            else ++k;
            s.pop();
        }
        cout << k << "\n";
    }
}
//9 8 4 2 1 18 19 
//1 4 3 2 1 5  4
//4 1 1 1 1 4  5