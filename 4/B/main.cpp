#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s[n];
    int lmax = 0;
    for(int i=0; i<n; i++)
    {
        string str; cin >> str;
        if(str.size() > lmax) lmax = str.size();
        s[i] = str;
    }

    string t[lmax];

    for(int i=0; i<n; i++)
    {
        string str = s[i];
        int size = str.size();
        for(int j=0; j<lmax; j++)
        {
            if(j < size) t[j] = t[j] + str[j];
            else if(t[j].size() > 0) t[j] = t[j] + "*";
        }
    }

//    for(int i=0; i<lmax; i++) cout << t[i] << endl;


    for(int i=0; i<lmax; i++)
    {
        string res;
        for(int j=0; j<t[i].size(); j++)
            res = t[i][j] + res;
        cout << res << endl;
    }



    return 0;
}
