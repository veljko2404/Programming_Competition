#include <iostream>
using namespace std;
int main(){
    long long int n,m,i,x,y,pr,npr,rez=0;
    cin >> n >> m;
    long long int a[n+1][3];
    for(i=1;i<=n;i++){
        cin >> a[i][0];
        a[i][1] = 0;
        a[i][2] = 0;
    }
    for(i=1;i<=m;i++){
        cin >> x >> y;
        pr = a[x][0] * 1 + a[y][0] * 1;
        npr = a[x][0] * -1 + a[y][0] * -1;
        if(pr>npr){
            a[x][1]++;
            a[y][1]++;
        } else {
            a[x][2]++;
            a[y][2]++;
        }
    }
    for(i=1;i<=n;i++){
        rez += a[i][0] * (a[i][1] - a[i][2]);
    }
    cout << rez;

}
