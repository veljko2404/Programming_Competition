#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int max_el(int a[], int n){
    int max = a[0],i;
    for(i=1;i<n;i++){
        if(a[max]<a[i]){
            max = i;
        }
    }
    return max;
}
int min_el(int a[], int n, int br){
    int min = br+1,i;
    for(i=br+1;i<n;i++){
        if(a[min]>a[i]){
            min = i;
        }
    }
    return min;
}
int main(){

    int n,i,max,min; cin >> n; int a[n];
    cin >> a[0]; max = 0; min = 0;
    for(i=1;i<n;i++){
        cin >> a[i];
        if(a[max]<a[i]){
            max = i;
        } else if(a[min]>a[i]){
            min = i;
        }
    }

    if(min<max){
        cout << a[max]-a[min];
    } else {

        reverse(a,a+min+1);
        max = max_el(a,n);
        min = min_el(a,n,max);
        cout << a[max]-a[min];

    }

}
