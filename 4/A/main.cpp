#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, t; cin >> n >> a >> t;

    if(min(a,t) + n - a - t >= max(a, t)) cout << "No";
    else cout << "Yes";

    return 0;
}
