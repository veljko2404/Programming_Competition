#include <iostream>
using namespace std;
int main(){
    long long int n,n1;
    cin >> n;
    int brcif = 0,d;
    n1 = n;
    while(n1>0){
        n1 /= 10;
        brcif++;
    }
    int arr[brcif];
    n1 = n;

    for(int i=brcif-1;i>=0;i--){
        arr[i] = n1 % 10;
        n1 /= 10;
    }
    int r=0;
    for(int i=0;i<brcif;i++){
        if(arr[i]==0){
            r += 0;
        } else if(arr[i]==1){
            r += 1;
        } else if(arr[i]==2){
            r += 1;
        } else if(arr[i]==3){
            r += 2;
        } else if(arr[i]==4){
            r += 2;
        } else if(arr[i]==5){
            r += 1;
        } else if(arr[i]==6){
            r += 2;
        } else if(arr[i]==7){
            r += 2;
        } else if(arr[i]==8){
            r += 3;
        } else if(arr[i]==9){
            r += 3;
        }
    }
    cout << r;
}
