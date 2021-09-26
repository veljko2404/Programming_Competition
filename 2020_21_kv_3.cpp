#include <iostream>
#include <algorithm>
using namespace std;
long long int f(long long int n, long long int a[]){
    int x=9999999999,i;
    for(i=0;i<n-1;i++){
        if(x>(a[i+1]-a[i])){
            x = a[i+1]-a[i];
        }
    }
    return x;
}
int main(){
    long long int t,i,n,m,s,x;
    cin >> t;
    bool rez[t];
    for(i=0;i<t;i++){
        rez[i] = true;
        cin >> n >> m;
        long long int acc[n], notacc[m];
        for(s=0;s<n;s++){
            cin >> acc[s];
        }
        for(s=0;s<m;s++){
            cin >> notacc[s];
        }
        sort(acc,acc+n);
        x = f(n,acc);
        for(s=0;s<m;s++){
            if((notacc[s]-acc[0]) % x == 0){
                rez[i] = 0;
                break;
            }
        }
    }
    for(i=0;i<t;i++){
        if(rez[i]){
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
