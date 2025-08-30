#include<bits/stdc++.h>


using namespace std;
int main(){
    vector<int> isPrime;
    vector<bool> isPrimeBool(46341, true);
    isPrimeBool[0] = false, isPrimeBool[1] = false;
    for(int i = 2; i <= 46340; i++){
        if(isPrimeBool[i]){
            isPrime.push_back(i);
            for(int j = i * 2; j <= 46340; j += i){
                isPrimeBool[j] = false;
            }
        }
    }

    int x;
    while(cin >> x){
        bool isPrimeFlag = true;
        if(x < 2){
            cout << "非質數\n";
            continue;
        }
        for(int i = 0; i < isPrime.size(); i++){
            if(isPrime[i] * isPrime[i] > x) break;
            if(x % isPrime[i] == 0 && x != isPrime[i]){
                cout << "非質數\n";
                isPrimeFlag = false;
                break;
            }
        }
        if(isPrimeFlag) cout << "質數\n";
    }
}