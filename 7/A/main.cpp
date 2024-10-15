#include <iostream>
using namespace std;

#define ll long long

int main() {
    char c1, c2, c3; cin >> c1 >> c2 >> c3;
    if(c1=='>' && c2=='<') cout << "A";
    else if(c1=='<' && c2=='>') cout << "A";

    else if(c3=='>' && c2=='<') cout << "C";
    else if(c3=='<' && c2=='>') cout << "C";

    else if(c1=='>' && c3=='<') cout << "B";
    else if(c1=='<' && c3=='>') cout << "B";

    else cout << "B";

    return 0;
}
