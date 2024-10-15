#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int h[n];
    for(int i=0; i<n; i++) cin >> h[i];

    int a[n-1];
    if(h[1] > h[0]) a[0] = 1;
    else a[0] = -1;

    for(int i=1; i<n-1; i++)
    {
        a[i] = 0;
        if(h[i+1] > h[i]) a[i] = a[i-1] + 1;
        else a[i] = a[i-1] - 1;
    }
//    for(int i=0; i<n-1; i++) cout << a[i] << " ";



    int min = a[0];
    for(int i=0; i<n-1; i++)
    {
        if(a[i] < min) min = a[i];
    }
    if(min > 0) min = 0;
    for(int i= 0; i<n-1; i++) a[i] = a[i] - min;
//    cout << "min : " << min << endl;
//    for(int i=0; i<n-1; i++)cout << a[i] << " "; cout << endl;


    int* m = new int[10000000];
    for(int i=0; i<10000000; i++)
        m[i] = 0;
    m[-min] += 1;

    for(int i=0; i<n-1; i++)
    {
        m[a[i]] ++;
    }

//    for(int i=0; i<10; i++) cout << m[i] << " "; cout << endl;

    int otp = 0;
    for(int i=0; i<10000000; i++)
    {
        if(m[i] < 2) continue;

        otp += (m[i] * (m[i]-1))/2;
    }

    cout << otp + n;




    return 0;
}
