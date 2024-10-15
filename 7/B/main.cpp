#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<bool> v(n, false);
    for(int i=0; i<m; i++)
    {
        int a; char b; cin >> a; cin >> b;
        if(!v[a-1] && b=='M')
        {
            cout << "Yes\n";
            v[a-1] = true;
        }
        else cout << "No\n";
    }

    return 0;
}
