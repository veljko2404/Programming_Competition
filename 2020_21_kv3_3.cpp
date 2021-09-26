#include <iostream>
using namespace std;

int main(){

    int t,i;
    cin >> t;
    bool rez[t];

    for(i=0;i<t;i++){
        int n,k,s;
        long long int sum=0,p1=0,p2=0;
        cin >> n >> k;
        int karte[n];
        for(s=0;s<n;s++){
            cin >> karte[s];
            sum += karte[s];
        }
        if(sum<=k){
            rez[i] = true;
        } else {
            s = 0;
            p1 = karte[s];
            while((p1+karte[s+1]) <= k){
                p1 += karte[s+1];
                s++;
            }
            s++;
            p2 = karte[s];
            while((p2+karte[s+1]) <= k){
                p2 += karte[s+1];
                s++;
            }
            if(p2>p1){
                rez[i] = false;
            } else {
                rez[i] = true;
            }

        }
    }

    for(i=0;i<t;i++){
        if(rez[i]){
            cout << "da" << endl;
        } else {
            cout << "ne" << endl;
        }
    }

}
