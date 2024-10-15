#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for(int I=0; I<T; I++)
    {
        int n; cin >> n;
        cout << n%10 + n/10 << endl;
    }



    return 0;
}
