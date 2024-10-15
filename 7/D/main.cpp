#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a, vector<int> b)
{
    return (a[0] < b[0]);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<vector<int>> xp(n, vector<int>(2));
    for(int i=0; i<n; i++)
        cin >> xp[i][0];
    for(int i=0; i<n; i++)
        cin >> xp[i][1];

//    for(auto x : xp) cout << x[0] << " " << x[1] << endl;


    sort(xp.begin(), xp.end(), cmp);

//    cout << endl << endl;
//    for(auto x : xp) cout << x[0] << " " << x[1] << endl;



    int Q; cin >> Q;
    for(int q=0; q<Q; q++)
    {
        int l, r; cin >> l >> r;
        int ans = 0;

        bool flag = false;
        for(int i=0; i<xp.size(); i++)
        {
            if(xp[i][0] >= l)
            {
                flag = true;
                for(int j=i; j<xp.size(); j++)
                {
                    if(xp[j][0] <= r)
                        ans += xp[j][1];
                    else
                        break;
                }
            }
            if(flag) break;
        }
        cout << ans << "\n";
    }




    return 0;
}
