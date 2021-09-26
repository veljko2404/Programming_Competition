#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){

    long long int n,i,sum=0; int c;
    cin >> n;
    long double b,rez=0.0,tmp,proc;

    pair<long double, int> a[n];

    for(i=0;i<n;i++){
        cin >> c >> b;
        a[i] = make_pair(b, c);
        sum += c;
    }

    sort(a,a+n);

    for(i=0;i<n;i++){
        proc = a[i].first / 100;
        tmp = sum * proc;
        sum -= a[i].second;
        if(tmp > rez) {
            rez = tmp;
        }
    }
    cout << setprecision(18) << rez;


}
