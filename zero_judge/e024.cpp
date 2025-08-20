#include<iostream>
#include<vector>
using namespace std;

void re0(vector<int> &v);
vector<int> int2vector(int num);
vector<int> add(const vector<int> &v1, const vector<int> &v2);
vector<int> sub(const vector<int> &v1, const vector<int> &v2);
vector<int> mul(const vector<int> &v1, const vector<int> &v2);
vector<int> karatsuba(vector<int>& v1, vector<int>& v2);
vector<int> div2(const vector<int> &v);
void exp(vector<int> &v1, vector<int> &v2);

int main(){
    int ib, ie;
    cin >> ib >> ie;
    while(ib != 0 && ie != 0){
        vector<int> vb = int2vector(ib);
        vector<int> ve = int2vector(ie);
        exp(vb, ve);
        cin >> ib >> ie;
    }
}

void re0(vector<int> &v){
    while(v.size() > 1 && v.back() == 0)v.pop_back();
}

vector<int> int2vector(int num){
    vector<int> result;
    while(num != 0){
        result.push_back(num % 10);
        num /= 10;
    }
    re0(result);
    return result;
}

vector<int> add(const vector<int> &v1, const vector<int> &v2){
    vector<int> result;
    int carry = 0, idx = 0, sum;
    while(idx < v1.size() || idx < v2.size() || carry){
        sum = carry;
        if(idx < v1.size()) sum += v1[idx];
        if(idx < v2.size()) sum += v2[idx];
        result.push_back(sum % 10);
        carry = sum / 10;
        idx++;
    }
    re0(result);
    return result;
}

vector<int> sub(const vector<int> &v1, const vector<int> &v2){
    vector<int> result;
    int diff, borrow = 0, idx = 0;
    while(idx < v1.size() || idx < v2.size() || borrow){
        diff = borrow;
        if(idx < v1.size()) diff += v1[idx];
        if(idx < v2.size()) diff -= v2[idx];
        if(diff < 0){
            diff += 10;
            borrow = 1;
        }else{
            borrow = 0;
        }
        result.push_back(diff);
        idx++;
    }
    re0(result);
    return result;
}

vector<int> mul(const vector<int> &v1, const vector<int> &v2){
    int len1 = v1.size(), len2 = v2.size();
    vector<int> result(len1 + len2, 0);
    for(int i = 0; i < len2; i++){
        for(int j = 0; j < len1; j++){
            result[i + j] += v1[j] * v2[i];
        }
    }
    int carry = 0;
    for(int i = 0; i < result.size(); i++){
        result[i] += carry;
        carry = result[i] / 10;
        result[i] %= 10;
    }
    re0(result);
    return result;
}

vector<int> karatsuba(vector<int>& v1, vector<int>& v2){
    int len = max(v1.size(), v2.size());
    if(len < 32)return mul(v1, v2);
    int pof2 = 32;
    while(pof2 < len)pof2 *= 2;
    while(v1.size() < pof2)v1.push_back(0);
    while(v2.size() < pof2)v2.push_back(0);

    int half = v1.size() / 2;
    vector<int> a0(v1.begin(), v1.begin() + half);
    vector<int> a1(v1.begin() + half, v1.end());
    vector<int> b0(v2.begin(), v2.begin() + half);
    vector<int> b1(v2.begin() + half, v2.end());

    vector<int> temp1 = add(a0, a1);
    vector<int> temp2 = add(b0, b1);
    vector<int> z0 = karatsuba(a0, b0);
    vector<int> z1 = karatsuba(temp1, temp2);
    vector<int> z2 = karatsuba(a1, b1);
    z1 = sub(z1, add(z0, z2));
    
    vector<int> result(pof2 + pof2, 0);
    for(int i = 0; i < z0.size(); i++) result[i] += z0[i];
    for(int i = 0; i < z1.size(); i++) result[i + half] += z1[i];
    for(int i = 0; i < z2.size(); i++) result[i + pof2] += z2[i];

    int carry = 0;
    for(int i = 0; i < result.size(); i++){
        result[i] += carry;
        carry = result[i] / 10;
        result[i] %= 10;
    }
    re0(result);
    return result;
}

vector<int> div2(const vector<int> &v){
    int res = 0;
    vector<int> result = v;
    for(int i = v.size() - 1; i >= 0; i--){
        res = res * 10 + v[i];
        result[i] = res / 2;
        res %= 2;
    }
    re0(result);
    return result;
}

void exp(vector<int> &v1, vector<int> &v2){
    if(v2.size() == 1 && v2[0] == 0){
        cout << "1\n";
        return;
    }
    if(v2.size() == 1 && v2[0] == 1){
        for(int i = v1.size() - 1; i >= 0; i--) cout << v1[i];
        cout << "\n";
        return;
    }
    vector<int> result(1, 1);
    while(v2.size() > 1 || (v2.size() == 1 && v2[0] > 0)){
        if(v2[0] % 2 == 1){
            result = karatsuba(result, v1);
        }
        v1 = karatsuba(v1, v1);
        v2 = div2(v2);
    }
    for(int i = result.size() - 1; i >= 0; i--) cout << result[i];
    cout << "\n";
}