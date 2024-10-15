#include <iostream>
#include <string>
using namespace std;

int main() {
    int I; cin >> I;
    for(int counter=0; counter<I; counter++)
    {
        string s; cin >> s;
        bool otp = false;
        if(s.size() >= 3 && s[0] == '1' && s[1] == '0' && s[2] != '0')
        {
            if(s.size() == 3 && s[2] != '1') otp = true;
            else if(s.size() > 3) otp = true;
        }

        if(otp) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }



    return 0;
}
