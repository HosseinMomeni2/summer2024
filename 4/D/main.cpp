#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                cin >> a[i][j][k];

    int q; cin >> q;
    for(int I=0; I<q; I++)
    {
        int x1,x2, y1,y2, z1,z2;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

        int otp = 0;
        for(int i=x1-1; i<x2; i++)
            for(int j=y1-1; j<y2; j++)
                for(int k=z1-1; k<z2; k++)
                    otp += a[i][j][k];

        cout << otp << endl;
    }


    return 0;
}
