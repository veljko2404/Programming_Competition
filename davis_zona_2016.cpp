#include <iostream>
using namespace std;
int main(){

    int a,b,c,d,x,y,dx,dy,dole,desno,k,i,j;
    cin >> a >> b >> c >> d >> x >> y >> dx >> dy >> dole >> desno >> k;
    int pr[a+1][b+1];
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            pr[i][j] = 0;
        }
    }
    for(i=x;i<x+c;i++){
        for(j=y;j<y+d;j++){
            pr[i][j] = 1;
        }
    }
    if(dole==0&&desno==0){
        cout << "NE";
    } else {
        bool ok = false;
        while(k>=0){
            if(pr[dx][dy]==1){
                break;
            } else {
                if(dx+dole<1||dx+dole>a){
                    dole *= -1;
                    ok = true;
                }
                if(dy+desno<1||dy+desno>b){
                    desno *= -1;
                    ok = true;
                }
                if(ok){k--;ok=false;}
                dx += dole;
                dy += desno;
            }
        }
        if(k<0){cout << "NE";}
        else {
            cout << dx << " " << dy;
        }
    }
    return 0;
}
