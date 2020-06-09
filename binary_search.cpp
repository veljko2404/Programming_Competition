#include <iostream>
using namespace std;
int f(int arr[], int n, int x){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + ((end - start) / 2);
        if(x==arr[mid]){
            return mid;
        } else if(x<arr[mid]){
            end = mid - 1;
        } else if(x>arr[mid]){
            start = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n = 6, x = 1;
    int arr[n] = {1, 2, 5, 14, 16, 17};
    // n je broj elementa niza
    // x je vrednost u nizu koja se trazi
    cout << f(arr, n, x);
}
