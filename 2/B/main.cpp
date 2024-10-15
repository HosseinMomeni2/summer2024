#include <iostream>
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    char grid[h][w];
    int si, sj; cin >> si >> sj;
    si --; sj --;
    for(int i=0; i<h; i++)
    {
        string s; cin >> s;
        for(int j=0; j<w; j++)
            grid[i][j] = s[j];
    }

    string x; cin >> x;
    for(int i=0; i<x.size(); i++)
    {
        switch (x[i]) {
            case 'U' :
                if(si > 0)
                    if(grid[si-1][sj] == '.')
                        si--;
                break;
            case 'D' :
                if(si < h-1)
                    if(grid[si+1][sj] == '.')
                        si++;
                break;
            case 'L' :
                if(sj > 0)
                    if(grid[si][sj-1] == '.')
                        sj--;
                break;
            case 'R' :
                if(sj < w-1)
                    if(grid[si][sj+1] == '.')
                        sj++;
                break;
        }
    }

    cout << si+1 << " " << sj+1;




    return 0;
}
