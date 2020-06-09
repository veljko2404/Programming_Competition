#include <iostream>
#include <algorithm>
using namespace std;
int f(int u[], int n, int x){
    int start = 0;
    int end = n-1;
    int br=0;
    while(start<=end){
        int mid = start + ((end-start) / 2);
        if(u[mid]>=x){
            br = n-mid;
            end = mid - 1;
        } else if(u[mid]<x){
            start = mid + 1;
        }
    }
    return br;

}
int main(){
    int n,m,i,s,j,br=0;
    cin >> n;
    int u[n];
    for(i=0;i<n;i++){
        cin >> u[i];
    }
    cin >> m;
    int p[m];
    for(i=0;i<m;i++){
        cin >> p[i];
    }
    reverse(u,u+n);

    for(s=0;s<m;s++){
        cout << f(u,n,p[s]) << endl;
    }
    //NOT EFIECIENT
    /*for(i=0;i<m;i++){
        for(s=0;s<n;s++){
            if(u[s]>=p[i]){
                br++;
            } else {
                break;
            }
        }
        cout << br << endl;
        br = 0;
    }*/

    return 0;
}
