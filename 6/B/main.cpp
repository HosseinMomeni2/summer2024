#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());

    int otp = 0;
    while(true)
    {
        if(v[1] <= 0) break;

        v[0]--; v[1]--; otp++;
        if(v[1] < v[2]) sort(v.rbegin(), v.rend());


//        for(auto x : v) cout << x << " "; cout << "\n";
    }

    cout << otp;


}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
