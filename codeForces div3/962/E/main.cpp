#include <iostream>
using namespace std;

int main() {


    int T; cin >> T;
    for(int C=0; C<T; C++)
    {
        string s;
        cin >> s;

        long long counter = 0;
        for(int x=0; x<s.size(); x++)
        {
            int c0 = 0, c1 = 0;

            for(int y=x; y<s.size(); y++)
            {
                if(s[y] == '0') c0 ++;
                else c1 ++;

                if(c1 == c0)
                {
                    counter += (x+1) * (s.size() - y);
                    counter %= 1000000007;
                }
            }


        }
        counter %= 1000000007;
        cout << counter << endl;
    }





    return 0;
}
