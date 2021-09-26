#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long long int n,i,rez1=0,rez2=0;
    bool ok = true;
    cin >> n;
    int a[n], b[n];
    for(i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }

    for(i=0;i<n-1;i++){
        if((abs(a[i]-a[i+1]) + abs(b[i]-b[i+1])) < (abs(a[i]-b[i+1]) + abs(b[i]-a[i+1]))){
            if(ok){
                rez1 += abs(a[i]-a[i+1]);
                rez2 += abs(b[i]-b[i+1]);
            } else {
                rez2 += abs(a[i]-a[i+1]);
                rez1 += abs(b[i]-b[i+1]);
            }
        } else {
            if(ok){
                rez1 += abs(a[i]-b[i+1]);
                rez2 += abs(b[i]-a[i+1]);
            } else {
                rez2 += abs(a[i]-b[i+1]);
                rez1 += abs(b[i]-a[i+1]);
            }
            if(ok){
                ok = false;
            } else {
                ok = true;
            }
        }
    }
    if(rez1>rez2){
        cout << rez1;
    } else {
        cout << rez2;
    }
}
