#include <iostream>
using namespace std;

void elsafty(int n) {
   if(n == 0) return;
    elsafty(n / 10);
    cout << n % 10 << " ";
}
int main(){
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        elsafty(n);
    }
    return 0;
}