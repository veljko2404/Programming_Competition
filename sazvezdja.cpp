#include <iostream>
//#include <bits/stdc++.h>
//#include <algorithm>
//#include <cmath>
//#include <iomanip>
//#include <string>
using namespace std;

int main(){

    int k,i,s,x,y,br=0,incr; cin >> k;
    if(k==0){
        cout << 0;
    }else if(k==1){
        y=0;
        cout << 3 << endl;
        for(i=0;i<3;i++){
            cout << i << " " << y << endl;
        }
    }else if(k==2){
        cout << 5 << endl;
        cout << 0 << " " << 2 << endl << 0 << " " << 1 << endl << 0 << " " << 0 << endl << 1 << " " << 0 << endl << 2 << " " << 0 << endl;
    }else if(k==3){
        cout << 9 << endl;
        for(i=1;i<=3;i++){
            cout << i << " " << i << endl;
        }
        x=2;
        for(i=2;i<=4;i++){
            cout << x << " " << i << endl;
        }
        x=2;
        for(i=7;i<=9;i++){
            cout << x << " " << i << endl;
        }
    }else if(k==4){
        cout << 4 << endl;
        for(i=0;i<4;i++){
            cout << i << " " << i << endl;
        }

    }else if(k==5){
        cout << 7 << endl;
        for(i=0;i<4;i++){
            cout << i << " " << i << endl;
        }
        x=100;
        for(i=7;i<=9;i++){
            cout << x << " " << i << endl;
        }
    }else if(k==6){
        cout << 10 << endl;
        for(i=0;i<4;i++){
            cout << i << " " << i << endl;
        }
        x=100;
        for(i=7;i<=9;i++){
            cout << x << " " << i << endl;
        }
        x=1000;
        for(i=11;i<=13;i++){
            cout << x << " " << i << endl;
        }
    }else if(k==7){
        cout << 13 << endl;
        for(i=0;i<4;i++){
            cout << i << " " << i << endl;
        }
        x=100;
        for(i=7;i<=9;i++){
            cout << x << " " << i << endl;
        }
        x=1000;
        for(i=11;i<=13;i++){
            cout << x << " " << i << endl;
        }
        x=2000;
        for(i=15;i<=17;i++){
            cout << x << " " << i << endl;
        }
    }else if(k==8){
        cout << 8 << endl;
        for(i=0;i<4;i++){
            cout << i << " " << i << endl;
        }
        x=7;
        for(i=8;i<=11;i++){
            cout << x << " " << i << endl;
            x++;
        }

    }else if(k==9){
        cout << 19 << endl;
        for(i=0;i<4;i++){
            cout << i << " " << i << endl;
        }
        x=100;
        for(i=7;i<=9;i++){
            cout << x << " " << i << endl;
        }
        x=1000;
        for(i=11;i<=13;i++){
            cout << x << " " << i << endl;
        }
        x=2000;
        for(i=15;i<=17;i++){
            cout << x << " " << i << endl;
        }
        x=5000;
        for(i=20;i<=22;i++){
            cout << x << " " << i << endl;
        }
        x=11000;
        for(i=25;i<=27;i++){
            cout << x << " " << i << endl;
        }
    }else if(k==10){
        cout << 22 << endl;
        for(i=0;i<4;i++){
            cout << i << " " << i << endl;
        }
        x=100;
        for(i=7;i<=9;i++){
            cout << x << " " << i << endl;
        }
        x=1000;
        for(i=11;i<=13;i++){
            cout << x << " " << i << endl;
        }
        x=2000;
        for(i=15;i<=17;i++){
            cout << x << " " << i << endl;
        }
        x=5000;
        for(i=20;i<=22;i++){
            cout << x << " " << i << endl;
        }
        x=11000;
        for(i=25;i<=27;i++){
            cout << x << " " << i << endl;
        }
        x=25000;
        for(i=200;i<=202;i++){
            cout << x << " " << i << endl;
        }
    }

    return 0;
}
