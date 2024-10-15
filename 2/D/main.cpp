#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , q; cin >> n >> q;
    int *a = new int[n];

    for(int i=0; i<n; i++) cin >> a[i];
    sort(a , a+n);

    for(int i=0; i<q; i++)
    {
        int b, k; cin >> b >> k;
        int index=0, in1=0, in2=0;
        if (b > a[n - 1])
        {
            index = n;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] > b) {
                    index = j;
                    break;
                }
            }
        }

//        cout << "index : " << index << endl;

        while(true)
        {
            long long right = 0, left=0;
            if(index+in1 >= n)
            {
                right = 9223372036854775800;
                left = abs(a[index-in2-1] - b);
            }
            else if(index-in2-1 < 0)
            {
                left = 9223372036854775800;
                right = abs(a[index+in1] - b);
            }
            else
            {
                left = abs(a[index-in2-1] - b);
                right = abs(a[index+in1] - b);
            }
//            cout << "left : " << left << "  right : " << right << endl;


            if(right >= left)
            {
                if(k == 1)
                {
                    cout << left << endl;
                    break;
                }
                in2++;
                k--;
            }
            else
            {
                if(k == 1)
                {
                    cout << right << endl;
                    break;
                }
                in1++;
                k--;
            }
        }

    }



    return 0;
}
