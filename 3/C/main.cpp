#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int *a = new int[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(sum <= m)
    {
        cout << "infinite";
        return 0;
    }

    int x = m/n + 1;
    while(true)
    {
        sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += min(a[i] , x);
        }
        if (sum > m)
        {
            cout << x-1;
            return 0;
        }
        x += 1;
    }
    return 0;
}
