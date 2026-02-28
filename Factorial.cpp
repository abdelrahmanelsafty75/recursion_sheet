
#include <iostream>
using namespace std;

int elsafty(int n) {
    if(n<=1)
        return 1;
    return n * elsafty(n-1);

}
int main(){
    int n;cin>>n;
    cout << elsafty(n);
    return 0;
}
