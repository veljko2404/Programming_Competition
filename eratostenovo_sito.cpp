#include <iostream>
//#include <bits/stdc++.h>
//#include <algorithm>
#include <cmath>
//#include <iomanip>
//#include <string>
using namespace std;

int main(){

    int n,i,j; cin >> n;
    bool prosti[n+1];
    for(i=1;i<=n;i++){
        prosti[i] = true;
    }
    int koren = sqrt(n);
    for(i=2;i<=koren;i++){
        if(prosti[i]==true){
            for(j=i;j<=n/i;j++){
                prosti[i*j]=false;
            }
        }
    }
    for(i=1;i<=n;i++){
        if(prosti[i]==true){
            cout << i << endl;
        }
    }
    return 0;
}
