#include <iostream>
//#include <bits/stdc++.h>
//#include <algorithm>
#include <cmath>
//#include <iomanip>
//#include <string>
using namespace std;

long long int nzd(long long int a, long long int b){
    if(b==0){
        return a;
    } else {
        return nzd(b, a%b);
    }
}
long long int nzs(long long int a, long long int b){
    return (a/nzd(a,b))*b;
}

int main(){

    long long int a,b; cin >> a >> b;
    a = abs(a); b = abs(b);
    cout << nzd(a,b) << endl << nzs(a,b);

    return 0;
}
