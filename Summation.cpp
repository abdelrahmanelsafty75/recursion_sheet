
#include <iostream>
using namespace std;

long long elsafty(int n, int arr[] ,int i) {
    if(i == n) return 0;
  return arr[i] + elsafty(n,arr,i+1);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0 ;i<n ;i++) cin>> arr[i];
    cout << elsafty(n,arr,0);
    return 0;
}
