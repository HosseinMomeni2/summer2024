#include <bits/stdc++.h>
using namespace std;

#define ll long long


struct bignum
{
    vector<int> num;
    int mod3;

    bignum()
    {
        this->num = vector<int>(20);
        this->mod3 = 0;
    }
    void operator+ (int a)
    {
        this->mod3 = (this->mod3+a) % 3;

        this->num[0] += a;
        for(int i=0; i<20; i++)
        {
            if(this->num[i] < 10) break;

            int temp = this->num[i] / 10;
            this->num[i] = this->num[i] % 10;
            this->num[i+1] += temp;
        }
    }
    void print()
    {
        int indextemp;
        for(int x = this->num.size()-1; x>=0; x--)
        {
            if(this->num[x] != 0)
            {
                indextemp = x;
                break;
            }
        }

        for(int i=indextemp; i>=0; i--) cout << this->num[i]; cout << "\n";
    }
};

ll calc(int h, int t)
{
    if (h == 1) return 1;

    ll otp = 0;

    if(t%3 == 1)
    {
        if(h <= 4) return 2;

        h -= 4;
        otp += 2;
    }
    else if(t%3 == 2)
    {
        if(h <= 3) return 1;

        h -= 3;
        otp += 1;
    }


    otp += (h/5) * 3;

    if(h%5 == 0) return otp;
    if(h%5 == 1) return otp + 1;
    if(h%5 == 2) return otp + 2;
    if(h%5 > 2) return otp + 3;
}


void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];


    bignum t;
    for(auto x : v)
    {
//        cout << "for enemi i : " << calc(v[i] , t) << "\n";
        t + calc(x, t.mod3);
    }


    t.print();
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();








    return 0;
}
