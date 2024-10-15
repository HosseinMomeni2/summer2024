#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
//    vector<int> bag;
    int *bag = new int[1000000];

    int otp = 0;
    int q; cin >> q;
    for(int I=0; I<q; I++)
    {
        int command; cin >> command;
        if(command == 1)
        {
            int x; cin >> x;
            bag[x-1] += 1;
            if(bag[x-1] == 1) otp ++;
        }
        else if(command == 2)
        {
            int x; cin >> x;
            bag[x-1] -= 1;
            if(bag[x-1] == 0) otp--;
        }
        else if(command == 3)
        {
            cout << otp << endl;
        }

    }

    delete []bag;


    return 0;
}
