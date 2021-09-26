#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int n,i;
    cin >> n;
    int a[n];
    int h[n-1];
    int k[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n-1;i++){
        cin >> h[i];
    }
    k[0]=0;
    k[1] = k[0] - a[0];
    for(i=2;i<n-1;i++){
        k[i] = k[i-1]-k[i-2]+k[i-1]-a[i-1];
    }
    k[n-1] = k[n-2] - a[n-2];
    cout << -1;

}