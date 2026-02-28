
#include <iostream>
using namespace std;

void elsafty(int n) {
    if(n<=0)
        return;
    cout << n;
    if(n > 1) cout << " ";
    elsafty(n-1);
}
int main(){
    int n;cin>>n;
    elsafty(n);
    return 0;
}
