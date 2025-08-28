#include<bits/stdc++.h>
//https://zerojudge.tw/ShowProblem?problemid=e346

using namespace std;
static char inbuf[1 << 20];
static char outbuf[1 << 20];
size_t inidx = 0, nbyte = 0, outidx = 0;
inline char readC(){
    if(inidx == nbyte){
        nbyte = fread(inbuf,1,sizeof(inbuf),stdin);
        inidx = 0;
    }
    return inidx < nbyte ? inbuf[inidx++] : EOF;
}
inline bool readI(int &x){
    x = 0;
    int neg = 1;
    char c;
    do{
        c =readC();
        if(c == EOF) return false;
        if(c == '-') neg = -1;
    }while(c < '0' || c > '9');
    do{
        x = x * 10 + (c - '0');
        c = readC();
    }while(c >= '0' && c <= '9');
    x *= neg;
    return true;
}
inline void flushOutput(){
    for(size_t i = 0; i < outidx; i++) putchar(outbuf[i]);
    outidx = 0;
}
inline void writeLL(long long x){
    char tmp[25];
    int len = 0;
    bool neg = false;
    if(outidx + 25 >= (1 << 20)) flushOutput();
    if(x < 0)neg = true, x = -x;
    do{
        tmp[len++] = x % 10 + '0';
        x /= 10;
    }while(x);
    if(neg) outbuf[outidx++] = '-';
    for(int i = len - 1; i >= 0; i--) outbuf[outidx++] = tmp[i];
    outbuf[outidx++] = '\n';
}
int main(){
    int n, l, r;
    readI(n);
    vector<int> a(n);
    vector<long long> prefix(n + 1);
    prefix[0] = 0;
    for(int i = 0; i < n; i++){
        readI(a[i]);
        prefix[i + 1] = prefix[i] + a[i];
    }
    readI(n);
    for(int i = 0; i < n; i++){
        readI(l); readI(r);
        writeLL(prefix[r] - prefix[l - 1]);
    }
    flushOutput();
    return 0;
}