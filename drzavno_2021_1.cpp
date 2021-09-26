#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int f(long long int k){

    long long int i,zbir=0;
    for(i=15;i<k;i++){
        zbir += i;
    }
    return 105+zbir;
}

int main(){

    long long int n,i,x,y,zbr=0,k=1,t;
    cin >> n;
    int a[n];
    int p[16] = {0,0,1,3,6,10,15,21,28,36,45,55,66,78,91,105};
    for(i=0;i<n;i++){
        cin >> x >> y;
        a[i] = x-y;
    }

    sort(a,a+n);
    t = a[0];
    for(i=1;i<n;i++){

        if(a[i]==t){
            k++;
        } else {
            if(k>1){
                if(k<15){
                    zbr += p[k];
                    k=1;
                    t = a[i];
                } else {
                    zbr += f(k);
                    k=1;
                    t = a[i];
                }
            } else {
                t = a[i];
            }
        }
    }
    if(k>1){
        if(k<15){
            zbr += p[k];
        } else {
            zbr += f(k);
        }
    }
    cout << zbr;

}