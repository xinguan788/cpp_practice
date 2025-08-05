#include<iostream>
using namespace std;
void permutation(int a[], bool used[], int x = 0){
    if(x == 10){
        if(a[0]*10000 + a[1]*1000 + a[2]*100 + a[3]*10 + a[4] + 
           2*(a[3]*100 + a[5]*10 + a[6]) ==
           a[7]*10000 + a[8]*1000 + a[9]*100 + a[3]*10 + a[4]){
            cout << a[0] << a[1] << a[2] << a[3] << a[4] << " + ";
            cout << a[3] << a[5] << a[6] << " + ";
            cout << a[3] << a[5] << a[6] << " = ";
            cout << a[7] << a[8] << a[9] << a[3] << a[4] << endl;
        }
        return;
    }
    for(int i = 0; i < 10; i++){
        if(!used[i]){
            used[i] = true;
            a[x] = i;
            permutation(a, used, x + 1);
            used[i] = false;
        }
    }
}
int main(){
    int a[10];
    bool used[10] = {false};
    permutation(a, used, 0);
    return 0;
}
/*
if(a[0]*10000 + a[1]*1000 + a[2]*100 + a[3]*10 + a[4] + 
            2*(a[3]*100 + a[5]*10 + a[6]) ==
            a[7]*10000 + a[8]*1000 + a[9]*100 + a[3]*10 + a[4]){
                cout<< a[0] << a[1] << a[2] << a[3] << a[4] << " + ";
                cout<< a[3] << a[5] << a[6] << " + ";
                cout<< a[3] << a[5] << a[6] << " = ";
                cout<< a[7] << a[8] << a[9] << a[3] << a[4] << endl;
                return;
            }
*/