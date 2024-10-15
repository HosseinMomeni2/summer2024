#include <iostream>
using namespace std;

const int nan = -1000000001;

int main() {
    int T; cin >> T;
    for(int COUNTER=0; COUNTER<T; COUNTER++)
    {
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int k; cin >> k;
        for(int c=0; c<k; c++)
        {
            string s;
            cin >> s;

            bool otp = true;
            int letters[26];
            for(int i=0; i<26; i++) letters[i] = nan;
//            cout << "letters reset!!!" << endl;

            if(s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }


            for(int i=0; i<n; i++)
            {
//                for(int j=0; j<26; j++) cout << letters[j] << " "; cout << endl;


                if(letters[s[i] - 'a'] == nan) {
                    letters[s[i] - 'a'] = a[i];
                }
                else if(letters[s[i] - 'a'] != a[i])
                {
                    otp = false;
                    break;
                }

            }

            if(otp) cout << "YES" << endl;
            else cout << "NO" << endl;

        }
    }



    return 0;
}
