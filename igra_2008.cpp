#include <iostream>
#include <cmath>
using namespace std;

int njm_del(int br){
    int i,n = sqrt(br);
    for(i=2;i<=n;i++){
        if(br%i==0){
            return i;
        }
    }
    return -1;
}

int f(int br){
    int d,brojac = 0;
    d = njm_del(br);
    while(d>0){
        br /= d;
        brojac++;
        d = njm_del(br);
    }
    if(brojac%2==0){
        return 1;
    } else{
        return 2;
    }

}

int main(){

    int n,i; cin >> n; int a[n];
    for(i=0;i<n;i++) cin >> a[i];
    for(i=0;i<n;i++){
        cout << f(a[i]) << endl;
    }

}
