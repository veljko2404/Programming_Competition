#include <iostream>
//#include <bits/stdc++.h>
//#include <algorithm>
//#include <cmath>
//#include <iomanip>
//#include <string>
using namespace std;

/*void oboji(int t[2000][2000],int i,int s,int rez){
    t[i][s]=rez;
    if(t[i+1][s]==0){
        oboji(t,i+1,s,rez);
    }
    if(t[i][s+1]==0){
        oboji(t,i,s+1,rez);
    }
    if(t[i][s-1]==0){
        oboji(t,i,s-1,rez);
    }
    if(t[i-1][s]==0){
        oboji(t,i-1,s,rez);
    }

}*/

int main(){

    int m,n,k,i,s,red,kol,rez=2; cin >> n >> m >> k;
    int t[n+2][m+2];
    int tk[n+2][m+2];
    for(i=0;i<=n+1;i++){
        for(s=0;s<=m+1;s++){
            if(s==0||i==0||(m+1==s)||(n+1==i)){
                t[i][s]= 1;
                tk[i][s] = 1;
            } else {
                t[i][s]=0;
                tk[i][s]=0;
            }
        }
    }
    for(i=0;i<k;i++){
        cin >> red >> kol;
        t[red][kol] = 1;
        tk[red][kol] = 1;
    }
    for(i=0;i<=n+1;i++){
        for(s=0;s<=m+1;s++){
            if(t[i][s]==1){
                continue;
            } else{
                if(t[i][s]>1){
                    if(t[i+1][s]==0){
                        t[i+1][s]=t[i][s];
                    }
                    if(t[i][s+1]==0){
                        t[i][s+1]=t[i][s];
                    }
                    if(t[i][s-1]==0){
                        t[i][s-1]=t[i][s];
                    }
                    if(t[i-1][s]==0){
                        t[i-1][s]=t[i][s];
                    }
                } else if((t[i-1][s]==1)&&(t[i+1][s]==1)&&(t[i][s-1]==1)&&(t[i][s+1]==1)){
                    t[i][s]=rez;
                    rez++;
                } else{
                    if(t[i+1][s]==0){

                    }
                }
            }
        }
    }
    for(i=0;i<=n+1;i++){
        for(s=0;s<=m+1;s++){
            cout << t[i][s] << " ";
        }
        cout << endl;
    }
    return 0;
}
