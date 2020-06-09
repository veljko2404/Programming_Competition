#include <iostream>
#include <algorithm>
using namespace std;
//52 POENA
int main(){

    int n,i,r=0,s,g,rez = 0; cin >> n; int k[2*n],a[n],b[n];
    for(i=0;i<n*2;i++) cin >> k[i];

    for(i=1;i<=n;i++){
        for(s=0;s<i;s++){
            a[s]=k[s];
        }
        g=0;
        for(s=i;s<i*2;s++){
            b[g]=k[s];
            g++;
        }
        sort(a,a+i);
        sort(b,b+i);
        for(s=0;s<i;s++){
            if(a[s]>b[s]){
                r++;
            }
        }
        if(r>rez){
            rez = r;
        }
        r = 0;
    }


    cout << rez;



    return 0;
}
