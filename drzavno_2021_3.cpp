#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int n,m,i,sum=0,rez=0;
    cin >> n >> m;
    long long int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    if(m==2){
        if(sum%2==0 && n%2==0){
            rez = sum;
        } else if(sum%2==1 && n%2==1){
            sort(a,a+n);
            for(i=0;i<n;i++){
                if(a[i]%2==1){
                    rez = sum - a[i];
                    break;
                }
            }
        } else if(sum%2==1 && n%2==0){
            sort(a,a+n);
            for(i=0;i<n;i++){
                if(a[i]%2==1){
                    sum -= a[i];
                    break;
                }
            }
            for(i=0;i<n;i++){
                if(a[i]%2==0){
                    rez = sum - a[i];
                    break;
                }
            }
        } else if(sum%2==0 && n%2==1){
            sort(a,a+n);
            for(i=0;i<n;i++){
                if(a[i]%2==0){
                    rez = sum - a[i];
                    break;
                }
            }
        }
    }
    cout << rez;

}