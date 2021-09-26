#include <iostream>
using namespace std;
int main(){

    long long int n,i,h,l,r,q,zbir=0,dva=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        zbir += a[i];
    }
    cin >> q;
    int k[q][4];
    for(i=0;i<q;i++){
        cin >> k[i][0];
        if(k[i][0]==1){
            cin >> k[i][1];
            cin >> k[i][2];
            cin >> k[i][3];
        } else {
            dva++;
        }
    }

    for(i=0;i<q;i++){
        if(k[i][0]==1 && k[i][3]>0){
            zbir += ((k[i][2] - k[i][1]) + 1 ) * k[i][3];
        }
    }
    cout << zbir * dva;

}