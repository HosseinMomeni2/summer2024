#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    for(int I=0; I<T; I++)
    {
        int n, p, q;
        cin >> n >> p >> q;
        int *a = new int[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int pp[p+1];
        int qq[q+1];

        for(int i=0; i<p+1; i++) pp[i] = a[i];
        for(int i=0; i<q+1; i++) qq[i] = a[i];

        sort(pp , pp+p+1);
        sort(qq , qq+q+1);


    }


    return 0;
}
