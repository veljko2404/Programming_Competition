#include <iostream>
#include <string>
using namespace std;
int main(){

    string s; cin >> s;
    int n,i,br=0,pare=0,suma=0,nakup;
    n = s.length();
    char c[n];
    for(i=0;i<n;i++){
        c[i] = s[i];
    }
    bool ok = true;
    for(i=0;i<n;i++){
        if(c[i]=='O'){
            if(br==0){
                br++;
                suma = 1;
                nakup = suma;
            }else if(br==14){
                cout << 1000000000;
                ok = false;
                break;
            } else {
                br++;
                suma *= 2;
                nakup += suma;
            }
        } else if(c[i]=='B'){
            pare += nakup;
            br = 0;
        }  else if(c[i]=='X'){
            br = 0;
            suma = 0;
            nakup = 0;
        }
    }
    if(ok){cout << pare;}
    return 0;
}
