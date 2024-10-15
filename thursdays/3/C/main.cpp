#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>


using namespace std;

#define ll long long


string to_string(unsigned int number, int length) {

    string num_str = std::to_string(number);

    if(num_str.length() >= length) return num_str;

    string leading_zeros(length - num_str.length(), '0');

    return leading_zeros + num_str;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    vector<vector<int>> v(b.size());
    for(int i=0; i<b.size(); i++)
    {
        char c = b[i];
        for(int j=0; j<a.size(); j++)
        {
            if(a[j] == c) v[i].push_back(j);
        }
    }
//    for(auto x : v) for(auto y : x) cout << y << endl;






    int otp = 0, num = 0;
    while(true)
    {
        string str = to_string(num, b.size());
        cout << "string : " << str << endl;
        if(str[0] - '0'  >= v[0].size()) break;

        int curr = v[0][str[0]-'0'];
        bool flag = true;
        for(int i=1; i<b.size(); i++)
        {
            if(str[i]-'0' >= v[i].size())
            {
                ll p = pow(10, b.size()-i-1);
                num +=
            }

            if(v[i][str[i] - '0'] <= curr)
            {
                flag = false;
                break;
            }
            curr = v[i][str[i] - '0'];
        }
        if(flag)
        {
            otp++;
            cout << "counted!!!" << endl;
        }

        num++;
        cout << endl;
        cout << "num : " << num << endl;
    }


    cout << otp;





    return 0;
}
