#include<bits/stdc++.h>
using namespace std;
static char inbuf[1 << 20];
static char outbuf[1 << 20];
size_t inidx = 0, ntype = 0, outidx = 0;
inline char readC(){
    if(inidx == ntype){
        ntype = fread(inbuf, 1, sizeof(inbuf), stdin);
        inidx = 0;
    }
    return ntype == 0 ? EOF : inbuf[inidx++];
}
inline bool readI(int &a){
    a = 0;
    char c;
    int neg = 1;
    do{
        c = readC();
        if(c == EOF) return false;
        if(c == '-') neg = -1;
    }while(c < '0' || c > '9');
    do{
        a = a * 10 + (c - '0');
        c = readC();
    }while(c >= '0' && c <= '9');
    a *= neg;
    return true;
}
inline void outflush(){
    for(int i = 0; i < outidx; i++){
        putchar(outbuf[i]);
    }
    outidx = 0;
}
inline void writeI(int x){
    char tmp[12];
    int len = 0;
    bool neg = false;
    if(x < 0){
        neg = true;
        x = -x;
    }
    do{
        tmp[len++] = x % 10 + '0';
        x /= 10;
    }while(x);
    if(neg) outbuf[outidx++] = '-';
    while(len--){
        outbuf[outidx++] = tmp[len];
    }
    outbuf[outidx++] = ' ';
    if(outidx >= (1 << 20)) outflush();
}
int main(){
    int n, c;
    while(readI(n)){
        if(n == 1){
            writeI(0);
        }
        for(int i = n - 1; i >= 1; --i){
            readI(c);
            writeI(c * i);
        }
        readI(c);
        outbuf[outidx++] = '\n';
    }    
    outflush();
}