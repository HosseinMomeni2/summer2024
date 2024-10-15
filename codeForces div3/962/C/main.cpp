#include <iostream>
using namespace std;


void FandR(string &s, char c)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == c)
        {
            s[i] = '.';
            return;
        }

    }
}

int main()
{

    int T; cin >> T;
    for(int COUNTER = 0; COUNTER<T; COUNTER++)
    {
        int n, q; cin >> n >> q;
        string a,b;
        cin >> a;
        cin >> b;

        for(int C=0; C<q; C++)
        {
            int r, l; cin >> r >> l;
            r--; l--;

            string s1 = a.substr(r, l-r+1);
            string s2 = b.substr(r, l-r+1);

            for(int i=0; i<s1.size(); i++)
            {
//                cout << "s1[i] : " << s1[i] << endl;
                FandR(s2, s1[i]);
//                cout << "s2 : " << s2 << endl;
            }
//        cout << "s2 : " << s2 << endl;

            int c = 0;
            for(int i=0; i<s2.size(); i++)
            {
                if(s2[i] != '.') c++;
            }
            cout << c << endl;
        }
    }













    return 0;
}
