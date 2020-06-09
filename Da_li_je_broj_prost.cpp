#include <iostream>
//#include <bits/stdc++.h>
//#include <algorithm>
#include <cmath>
//#include <iomanip>
//#include <string>
using namespace std;

bool slozen(int br){
    int i,k;
    k = sqrt(br);
    for(i=2;i<=k;i++){
        if(br%i==0){
            return true;
        }
    }
    return false;
}

int main(){

    int br,i,rez; cin >> br;

    if(slozen(br)){
        cout << "slozen je";
    } else {
        cout << "prost je";
    }

    return 0;
}
