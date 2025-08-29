#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=368

using namespace std;
vector<int> less10000Prime;
void built_less_10000_prime(){
    vector<bool> arr(10001, true);
    arr[0] = false, arr[1] = false;
    for(int i = 2; i <= 10000; i++){
        if(arr[i]){
            less10000Prime.push_back(i);
            for(int j = i * 2; j <= 10000; j += i)
                arr[j] = false;
        }
    }
}
bool is_prime_day(int date){
    int temp;
    for(int i = 10; i <= 100000000; i *= 10){
        temp = date % i;
        if(temp < 2)return false;
        for(auto p : less10000Prime){
            if(temp % p == 0 && temp != p)
                return false;
            if(p * p > temp)
                break;
        }
    }
    return true;
}
int main(){
    int date;
    int y = 2000, m = 1, d = 1;
    vector<int> month = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    built_less_10000_prime();
    
    for(; y <= 2999; ++y){
        for(m = 1; m <= 12; ++m){
            if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
                month[2] = 29;
            else
                month[2] = 28;
            for(d = 2; d <= month[m]; ++d){
                date = y * 10000 + m * 100 + d;
                if(is_prime_day(date))
                    cout << setw(4) << setfill('0') << y << "/" << setw(2) << setfill('0') << m << "/" << setw(2) << setfill('0') << d << endl;
            }
        }
    }
    
}