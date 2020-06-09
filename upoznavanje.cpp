#include <iostream>
#include <bits/stdc++.h>
//#include <algorithm>
#include <cmath>
//#include <iomanip>
//#include <string>
using namespace std;

int main(){

    long long int n,i,br,x,min,max; cin >> n >> x;
    long long int k[n];
    for(i=0;i<n;i++){
        cin >> k[i];
    }
    max = *max_element(k, k+n);
    min = *min_element(k, k+n);
    if(abs(x-min)>abs(x-max)){
        cout << abs(x-max) + abs(max-min);
    } else {
        cout << abs(x-min) + abs(max-min);
    }

    return 0;

}
