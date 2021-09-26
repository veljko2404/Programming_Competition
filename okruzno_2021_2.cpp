#include <iostream>
#include <cmath>
using namespace std;
int main(){

    long long int n,m,i,k,zbir=0, min=999999999,br;
    cin >> n >> m;
    int a[n][m];
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            cin >> a[i][k];
        }
    }
    for(i=0;i<m-1;i++){
        br = abs(a[0][i+1] - a[0][i]);
        zbir += br;
        if(br <  min){
            min = br;
        }
    }
    if(min < abs(a[0][0] - a[0][m-1])){
        zbir += abs(a[0][0] - a[0][m-1]) - min;
    }
    cout << zbir;

}