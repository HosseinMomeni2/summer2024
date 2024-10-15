#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b; cin >> n >> a >> b;
    int swt[n], slt[n];
    for(int i=0; i<n; i++)
        cin >> swt[i];
    for(int i=0; i<n; i++)
        cin >> slt[i];

    sort(swt, swt+n, greater<int>());
    sort(slt, slt+n, greater<int>());

//    for(int i=0; i<n; i++)
//        cout << swt[i] << " ";
//    cout << endl;
//    for(int i=0; i<n; i++)
//        cout << slt[i] << " ";

    int ans1 = n; int ans2 = n;


    long long total = 0;
    for(int i=0; i<n; i++)
    {
        total += swt[i];
//        cout << total << endl;
        if(total > a)
        {
            ans1 = i+1;
            break;
        }
    }

    total = 0;
    for(int i=0; i<n; i++)
    {
        total += slt[i];
//        cout << "hello";
        if(total > b)
        {
            ans2 = i+1;
            break;
        }
    }

//    cout << ans1 << " " << ans2 << endl;
    int ans = min(ans1, ans2);

    cout << ans;




    return 0;
}
