#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; cin >> T;
    for(int COUNTER = 0; COUNTER < T; COUNTER++)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        int otp = 0;
        while(true)
        {
            if(v.size() == 1) break;

            if(*v.end()%*(v.end()-1) != 0)
            {
                *(v.end() - 1) = *v.end()%*(v.end()-1);
                v.pop_back();
                continue;
            }
            if(*(v.end()-1)%*(v.end()) != 0)
            {
                *(v.end() - 1) = *(v.end()-1)%*(v.end());
                v.pop_back();
                continue;
            }


        }

    }




    return 0;
}
