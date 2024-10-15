#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin >> n;
    int k; cin >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];

    for(int i=n-k; i<n; i++) cout << v[i] << " ";
    for(int i=0; i<n-k; i++) cout << v[i] << " ";

}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
