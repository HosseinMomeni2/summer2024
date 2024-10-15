#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >>T;
    for(int I=0; I<T; I++)
    {
        int n, m; cin >> n >> m;
        int a[m];
        int b[m];
        for(int i=0; i<m; i++) a[i] = 0;
        for(int i=0; i<m; i++) b[i] = 0;

        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            a[x-1] += 1;
        }
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            b[x-1] += 1;
        }

//    for(int i=0; i<m; i++) cout << a[i] << " "; cout << endl;
//    for(int i=0; i<m; i++) cout << b[i] << " "; cout << endl;

        int otp = 0;
        for(int i=0; i<m; i++)
        {
            otp += min(a[i] , b[i]);
        }

        cout << otp << endl;
    }


    return 0;
}
