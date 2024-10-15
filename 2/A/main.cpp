#include <iostream>
using namespace std;

int main() {
    bool otp = true;
    bool pre = false;

    int n; cin >> n;
    for(int i=0; i<n-1; i++)
    {
        string s;
        cin >> s;
        if(otp == false) continue;

        if(s == "sweet")
        {
            if(pre == true)
                otp = false;
            else
                pre = true;
        }
        else
            pre = false;

    }
    string s; cin >> s;

    if(otp == false) cout << "No";
    else cout << "Yes";


    return 0;
}
