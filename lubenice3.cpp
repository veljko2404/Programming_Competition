#include <iostream>
//#include <bits/stdc++.h>
//#include <algorithm>
#include <cmath>
//#include <iomanip>
//#include <string>
using namespace std;

int main(){

    long long int p,q,r,L,R,razl,br,n,mx,d=0; cin >> p >> q >> r >> L >> R;
    razl = p*q*r - (p*q+p*r+q*r);
    mx = max(p,max(q,r));
    if(razl<0){
        br=0;
    }else if(razl>3){
        if(L>mx){
            br = R-L+1;
        } else if(R>mx){
            br = R-mx+1;
        }
    }else if((razl>=0)&&(razl<=3)){
        br=0;
        for(n=L;n<=R;n++){
            if(n%p==0){
                d++;
            }
            if(n%q==0){
                d++;
            }
            if(n%q==0){
                d++;
            }
            if(d<=razl){
                br++;
            }
        }
    }
    cout << br;

    return 0;
}
