#include <iostream>
using namespace std;
int main(){

    long long int n,i,q,zbir=0,k,x;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> q;
    int rez[q];
    for(i=0;i<q;i++){
        cin >> x;
        for(k=0;k<n;k++){
            if(a[k] < x + k){
                zbir += (x - a[k]) + k;
            } else if(a[k] > x + k){
                zbir += (a[k] - k) - x;
            }
            rez[i] = zbir;
        }
        zbir = 0;
    }
    for(i=0;i<q;i++){
        cout << rez[i] << endl;
    }


}