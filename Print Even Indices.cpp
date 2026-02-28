#include <iostream>
using namespace std;

void elsafty(int arr[],int n) {
    if(n < 0) return;
    cout << arr[n] << " ";
    elsafty(arr, n - 2);
}
int main(){
   int n;cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>> arr[i];
    int start = (n%2 == 0 ? n-2 : n-1);
    elsafty(arr,start);
    return 0;
}