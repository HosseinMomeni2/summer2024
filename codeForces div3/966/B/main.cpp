#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for(int COUNTER=0; COUNTER<T; COUNTER++)
    {
//        cout << "number : " << COUNTER << endl;
//        cout << "enter n :";
        int n; cin >> n;
        int x; cin >> x;
        int min = x, max = x;
        bool otp = true;
        for(int i=0; i<n-1; i++)
        {
            cin >> x;
//            cout << "max : " << max << "  min : " << min << endl;
            if(x == max+1)
                max++;
            else if(x == min-1)
                min--;
            else
            {
                otp = false;
            }
        }

        if(otp) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}
