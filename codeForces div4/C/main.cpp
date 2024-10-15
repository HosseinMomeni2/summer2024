#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; cin >> T;
    for(int I=0; I<T; I++)
    {
        vector<int> v;
        int n, s, m;
        cin >> n >> s >> m;
        for(int i=0; i<n; i++)
        {
            int a, b; cin >> a >> b;
            v.push_back(a);
            v.push_back(b);
        }
//        for(int i=0; i<v.size(); i++) cout << v[i] << " "; cout << endl;



        if(v[0] >= s)
        {
//            cout << "v[0] >= s" << endl;
            cout << "YES" << endl;
            continue;
        }
//        cout << "v[v.size -1] : " << v[v.size()-1] << endl;
        if(m - v[v.size()-1] >= s)
        {

//            cout << "m - v[v.size()-1] >= s" << endl;
            cout << "YES" << endl;
            continue;
        }
        bool NF = true;
        for(int i=2; i<v.size(); i+=2)
        {
            if(v[i] - v[i-1] >= s)
            {
                NF = false;
//                cout << v[i] << " - " << v[i-1] << ">=" << s  << endl;
                cout << "YES" << endl;
                break;
            }
        }

        if(NF) cout << "NO" << endl;
    }



    return 0;
}
