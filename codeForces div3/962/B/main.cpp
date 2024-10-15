#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    for(int counter=0; counter<T; counter++)
    {
        int n, k; cin >> n >> k;
//        cout << "n : " << n << endl;
        int a[n][n];

        for(int i=0; i<n; i++)
        {
//            cout << "i : " << i << endl;
            string inp;
            cin >> inp;
            for (int j = 0; j < n; j++)
            {
//                cout << "inp[j] = " << inp[i] << endl;
                if (inp[j] == '0') a[i][j] = 0;
                else a[i][j] = 1;
            }
        }

//        cout << "printing a : " << endl;
//        for(int i=0; i<n; i++)
//        {
//            for(int j=0; j<n; j++)
//                cout << a[i][j] << " ";
//            cout << endl;
//        }

//        int otp[n/k][n/k];
        for(int i=0; i<n; i += k)
        {
            for(int j=0; j<n; j += k)
            {
//                cout << "a[" << i << "][" << j << "] : " << a[i][j] << endl;
//                otp[i/k][j/k] = a[i][j];
                cout << a[i][j];
            }
            cout << endl;
        }
//        for(int i=0; i<n/k; i++)
//        {
//            for(int j=0; j<n/k ;j++)
//                cout << otp[i][j] << " ";
//            cout << endl;
//        }
    }


    return 0;
}
