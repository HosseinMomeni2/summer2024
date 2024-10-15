#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for(int I=0; I<T; I++)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;


        int c = 0;
        if(a1 > b1 && a2 > b2) c+=2;
        if(a1 > b2 && a2 > b1) c+= 2;





        cout << c << endl;

    }



    return 0;
}
