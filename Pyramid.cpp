#include <iostream>
using namespace std;
void elsafty(int current, int total) {
    if (current > total) return;

    for (int i = 0; i < total - current; i++)
        cout << " ";

    for (int i = 0; i < (2 * current - 1); i++)
        cout << "*";

    cout << endl;
    elsafty(current + 1, total);
}

int main() {
    int n;cin>>n;
    elsafty(1, n);

    return 0;
}