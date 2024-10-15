#include <iostream>
using namespace std;

bool isPal(string s)
{
    bool otp = true;
    string n = "";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '0') s[i] = '.';
        else break;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != '.') n = n+s[i];
    }

    int size = n.size();
    for(int i=0; i<size; i++)
    {
        if(n[i] != n[size-1-i])
        {
            otp = false;
            break;
        }
    }

    return otp;
}
string makelen18(long long n)
{
    string otp = to_string(n);

    while(otp.size() != 18)
        otp = "0" + otp;

    return otp;
}
string findpal(int x)
{
    if(x == 1) return "0";

    long long n = 1;
    string n2="0", n1;
    int counter = 1;

    while(true)
    {
        n1 = to_string(n);
        if(isPal(n2+n1))
            if(++counter == x) break;

        if(n == 999999999999999999)
        {
            n = 0;
            n2 = to_string(stoi(n2) + 1);
        }
        else
        {
            n++;
        }

    }

    return n2 + n1;
}

int main() {

    long long n; cin >> n;
    string s = findpal(n);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '0') s[i] = '.';
        else break;
    }
    for(int i=0; i<s.size(); i++) if(s[i] != '.') cout << s[i];

    return 0;
}
