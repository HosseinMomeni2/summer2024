#include <iostream>
using namespace std;

int count(int n, int* a, int t)
{
    int otp = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] >= t) otp++;
    }

    return otp;
}

void inc(int* a, int size)
{
    for(int i=0; i<size; i++) a[i]++;
}


int main() {
    int n, t, p; cin >> n >> t >> p;
    //cout << n << endl;
    int a[n];
    for(int i=0; i<n; i++)
    {
        //cout << i << " :";
        cin >> a[i];

    }

    int otp = 0;
    while(true)
    {
        //cout << count(n , a , t) << endl;
        if(count(n, a, t) >= p) break;
        inc(a, n);
        otp++;
    }

    cout << otp;


    return 0;
}
