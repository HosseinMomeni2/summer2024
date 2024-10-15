#include <iostream>
using namespace std;

int in(long long rate)
{
    long long a[8] = {-100000000001, 1200, 1400, 1600, 1900, 2100, 2400, 100000000001};
//    cout << a[0] << "   " << a[7];
    string b[7] = {"newbie", "pupil", "specialist", "expert",
                   "candidate master", "master" ,"grandmaster"};


    for(int i=0; i<8; i++)
    {
        if(rate < a[i]) return i-1;
    }

    return 6;
}

int main() {
    {string s; cin >> s;}
    int curr; cin >> curr;
    int max; cin >> max;
    int delta; cin >> delta;

//    int a[8] = {-1000000001, 1200, 1400, 1600, 1900, 2100, 2400, 1000000001};
    string b[7] = {"newbie", "pupil", "specialist", "expert",
                   "candidate master", "master" ,"grandmaster"};

    int indexMax = in(max);
    int index = in(curr + delta);

    if(index > indexMax) cout << b[index];
    else cout << "Think about it, you can do it!";



    return 0;
}
