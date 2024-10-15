#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a+n, greater<int>());

//    for(int i=0; i<n; i++) cout << a[i];

    int found = a[1];

    for(int i=0; i<n; i++) if(b[i] == found)
        {
            cout << i+1;
            break;
        }

    return 0;
}
