#include <iostream>
using namespace std;


bool check(char* s, int k, int size)
{
    bool otp = false;
    for(int i = 0; i<size-k; i++)
    {
        bool flag = true;
        for(int j=0; j<k; j++)
        {
            if(s[i+j] != s[i+k-1-j])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            return true;
        }
    }

    return otp;
}

int main() {
    int n, k; cin >> n >> k;
    long long factN = 1;
    for(int i=2; i<=n; i++) factN *= i;
    char s[15]; cin >> s;
    sort(s, s+n);

    long long otp = 0;
    while(true)
    {
        cout << s << endl;

        if(!check(s, k, n))
        {
            cout << "no permu : " << s << endl;
            otp++;
        }
        if(!next_permutation(s, s+n)) break;
    }

    cout << otp;




    return 0;
}
