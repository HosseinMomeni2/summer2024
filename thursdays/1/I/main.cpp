#include <iostream>
using namespace std;

int main() {
    int m, n; cin >> n >> m;
    int a[n+2][m+2];
//    int **a = new int*[n+2];
//    for(int i=0; i<n; i++)
//        a[i] = new int [m+2];

    for(int i=0; i<m+2; i++)
    {
        a[0][i] = 1;
        a[n+1][i] = 1;
    }
    for(int i=0; i<n+2; i++)
    {
        a[i][0] = 1;
        a[i][m+1] = 1;
    }

    int count0 = 0;
    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<m+1; j++)
        {
            int x; cin >> x;
            a[i][j] = x;
            if(x == 0) count0++;
        }
    }

    if(count0 > 8)
    {
            cout << "LOSE";
        return 0;
    }

    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<m+1; j++)
        {
            int c=0;
            if(a[i-1][j-1] == 0) c++;
            if(a[i-1][ j ] == 0) c++;
            if(a[i-1][j+1] == 0) c++;

            if(a[i][j-1] == 0) c++;
            if(a[i][j+1] == 0) c++;

            if(a[i+1][j-1] == 0) c++;
            if(a[i+1][ j ] == 0) c++;
            if(a[i+1][j+1] == 0) c++;

            if(count0 - c == 0)
            {
                cout << "WIN";
                return 0;
            }
        }
    }


    cout << "LOSE";
    return 0;
}
