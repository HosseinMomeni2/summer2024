#include <iostream>
#include <vector>
using namespace std;


long long mod(long long x , long long p , long long m)
{
    x = x%m;
    int xx = x;
    for(int i=0; i<p; i++)
    {
        x *= xx;
        x = x%m;
    }

    return x;
}


int main() {
    int T; cin >> T;
    for(int I=0; I<T; I++)
    {

        long long a,b, d; cin >> a >> b >> d;

        vector<int> v;
        v.push_back(b%d);

        for(int i=2; i<=d; i++)
        {
            int box = mod(b, i, d);
            if(box == v[0]) break;
            v.push_back(box);
        }

        int dsize = d - v.size();

        bool found = false;
        /// halate khase 0

        if(a%d == 0)
        {
            cout << 0 << endl;
            found = true;
        }

        else {
            for (int i = 1; i < d; i++) {
                if ((a + b * i) % d == 0) {
                    if ((a * mod(b, i, d)) % d == 0) {
                        cout << i << endl;
                        found = true;
                        break;
                    }

                    int start = i % v.size() - 1;
                    for (int index = start + dsize, j = 1;; index += dsize, j++) {
                        index = index % v.size();
                        if (index == v.size()) index = 0;

                        if ((a * v[index]) % d == 0) {
                            found = true;
                            cout << i + d * j << endl;
                            break;
                        }

                        if (index == start) break;
                    }

                }
            }
        }
        if(!found) cout << -1 << endl;
    }





    return 0;
}