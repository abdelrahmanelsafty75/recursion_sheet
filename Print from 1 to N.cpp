
#include <iostream>
using namespace std;

void elsafty(int n) {
    if(n<=0)
        return;
   elsafty(n-1);
   cout << n << endl;
}
int main(){
    int n;cin>>n;
    elsafty(n);
    return 0;
}