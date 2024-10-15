#include <iostream>
using namespace std;

int dec(char c)
{
    switch (c) {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        case 'A':
            return 10;
        case 'b':
            return 11;
        case 'C':
            return 12;
        case 'd':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;

    }
}

int main() {
    string s; cin >> s;

    char a[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'b', 'c', 'd', 'E', 'F'};
    char b[16] = {'0', '1', '2', 'E', 'n', '5', '9', 'n', '8', '6', 'n', 'n', 'n', 'n', '3', 'n'};


    int otp = 0;
    for(int i=0; i<=(s.size()-1)/2; i++)
    {
        char c1=s[i];
        char c2=s[s.size() - 1 - i];

//        cout << "c1 : " << c1 << "  c2 : " << c2 << endl;
//        cout << "dec(c1) : " << dec(c1) << "  dec(c2) : " << dec(c2) << endl;

        if(b[dec(c1)] == c2)
        {
            continue;
        }

        if(b[dec(c1)] != 'n' || b[dec(c2)] != 'n')
        {
            otp++;
        }
        else
        {
            otp += 2;
        }

//        cout << "otp : " << otp << endl;
    }

    cout << otp << endl;



    return 0;
}
