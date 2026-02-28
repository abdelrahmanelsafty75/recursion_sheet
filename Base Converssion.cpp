#include <iostream>
using namespace std;

void elsafty(int n) {
    if(n == 0) return;
    elsafty(n / 2);
    cout << n % 2 ;
}
int main(){
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        if(n == 0) cout << "0 " << endl;
        else elsafty(n);
        cout << endl;
    }
    return 0;
}