#include <iostream>
using namespace std;

bool ispal(long long n)
{
    if(n == 1 || n == 0) return false;
    string x = to_string(n);

    int size = x.size();
    for(int i=0; i<size; i++)
    {
        if(x[i] != x[size-1-i]) return false;
    }
    return true;
}

long long mirr(long long n)
{
    long long otp = 0;

    while(n)
    {
        otp += n%10;
        otp *= 10;
        n /= 10;
    }

    return otp/10;
}



int main() {




    return 0;
}
