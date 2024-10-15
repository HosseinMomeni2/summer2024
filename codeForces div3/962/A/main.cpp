#include <iostream>
using namespace std;

int f(int n)
{
    int otp = 0;
    if(n % 4 == 2)
    {
        n -= 2;
        otp += 1;
    }
    otp += n/4;
    return otp;
}

int main() {
    int t; cin >> t;
    for(int i=0; i<t; i++)
    {
        int x; cin >>x;
        cout << f(x) << endl;
    }
    return 0;
}
