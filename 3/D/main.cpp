#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    s = 'E' + s + 'E';

    int otp = 0;
    int size = s.size() - 1;
    for(int i=0; i<size; i++)
    {
        cout << "i : " << i << endl;
        int plus = 1;
        if(s[i] == s[i+1])
        {
            int count = 0;
            char c = s[i];
            for(int j=i; j<size; j++)
            {
                if(s[j] != c)
                {
                    break;
                }

                count++;
            }
            cout << "count : " << count << endl;
            plus = 0;
            plus += count/2;
            plus += (count%2 + 1) / 2;
            cout << "plus : " << plus << endl;
            i += count - 1;
        }

        otp += plus;
    }

    cout << otp;


    return 0;
}
