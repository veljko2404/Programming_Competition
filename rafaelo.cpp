#include <iostream>
//#include <bits/stdc++.h>
//#include <algorithm>
//#include <cmath>
//#include <iterator>
//#include <iomanip>
//#include <string>
//#include <functional>
//#include <stdlib.h>
using namespace std;

int f(int a[], int n){

    int i,r,zbr=0;
    for(i=0;i<n;i++){
        if(a[i]==1){
            return 1;
        }
        zbr += a[i]-2;
    }
    if(zbr%2==0){
        r = 2;
    } else {
        r = 1;
    }
    return r;
}

int main(){

    int i,a,b,c;
    cin >> a; int p[a];
    for(i=0;i<a;i++) cin >> p[i];
    cin >> b; int d[b];
    for(i=0;i<b;i++) cin >> d[i];
    cin >> c; int t[c];
    for(i=0;i<c;i++) cin >> t[i];

    cout << f(p,a) << endl << f(d,b) << endl << f(t,c) << endl;


    return 0;
}
