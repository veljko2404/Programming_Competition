#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    long long int n,m,i,xx,yy;; cin >> n >> m;
    long long int nx[n+1],ny[n+1];
    for(i=1;i<=n;i++){
        nx[i] = 0;
        ny[i] = 0;
    }
    for(i=0;i<m;i++){
        cin >> xx;
        cin >> yy;
        nx[xx]=1;
        ny[yy]=1;
    }
    xx=n;
    yy=n;
    for(i=1;i<=n;i++){
        if(nx[i]==1){
            xx--;
        }
        if(ny[i]==1){
            yy--;
        }
    }
    cout << n*n-xx*yy;

    return 0;
}
