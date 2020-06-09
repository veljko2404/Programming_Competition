#include <iostream>
using namespace std;
int main()
{
    int i, j,n; n=10000;//cin >> n;
    for(i=2; i<n; i++){
        for(j=2; j<=i/2; j++){
            if(i%j==0) break;
        }
        if(j > i/2)
            cout << i << endl;
    }
    return 0;
}
