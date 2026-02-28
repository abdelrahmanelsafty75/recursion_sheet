
#include <iostream>
using namespace std;

int elsafty(int n, int arr[],int i) {
    if(i == n-1) return arr[i];
    int max = elsafty(n,arr,i + 1);
    int ans = (arr[i] > max ? arr[i] : max);
    return ans;

}
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i=0 ;i<n ;i++)
        cin>> arr[i];

    cout << elsafty(n,arr,0);
    return 0;
}
