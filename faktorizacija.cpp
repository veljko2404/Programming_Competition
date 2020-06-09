#include <iostream>
//#include <bits/stdc++.h>
//#include <algorithm>
#include <cmath>
//#include <iomanip>
//#include <string>
using namespace std;

void f(int n){

    int i,k=0,d=2,p[50],a[50];
    for(i=0;i<50;i++){
        p[i]=0;
        a[i]=0;
    }
    while(d*d <= n){
        if(n%d==0){
            k++;
            p[k]=d;
            a[k]=0;
            while(n%d==0){
                n /= d;
                a[k]++;
            }
        }
        d++;
    }
    if(n>1){
        k++;
        p[k]=n;
        a[k]=1;
    }
    for(i=1;i<50;i++){
        if(a[i]==0){
            break;
        } else if(i>=2){
            cout << "*";
        }
        cout << p[i] << "^" << a[i];
    }
    cout << endl;

}

int main(){

    int n,i,k,d,s; cin >> n;
    int br[n];
    for(i=0;i<n;i++){
        cin >> br[i];
    }


    for(i=0;i<n;i++){
        f(br[i]);
    }
    return 0;
}
