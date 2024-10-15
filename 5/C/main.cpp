#include <vector>
#include <iostream>
using namespace std;

int sum(vector<int> v)
{
    int s = 0;
    for(int i=0; i<v.size(); i++) s+=v[i];
    return s;
}

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> r;
    for(int i=0; i<n; i++)
    {
        int num; cin >> num;
        r.push_back(num);
    }
    int mul = 1;
    for(int i=0; i<n; i++) mul *= r[i];

    vector<int> v(n);
    for(int i=0; i<n; i++) v[i] = 1;

    for(int i=0; i<mul; i++)
    {
        if(sum(v)%k == 0)
        {
            for(int i=0; i<v.size(); i++) cout << v[i] << " ";
            cout << "\n";
        }

        for(int i=n-1; i>=0; i--)
        {
            if(++v[i] > r[i])
            {
                v[i] = 1;
            }
            else break;
        }
    }



}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();


    return 0;
}
