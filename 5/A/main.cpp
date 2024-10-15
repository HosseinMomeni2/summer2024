#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(c > b)
    {
        if(a<c && a>b) cout << "No";
        else cout << "Yes";
    }
    else if(b > c)
    {
        if(a>b || a<c) cout << "No";
        else cout << "Yes";
    }




}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();


    return 0;
}
