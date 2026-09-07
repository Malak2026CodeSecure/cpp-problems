#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, s = 0;
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a))
        cout << "0" << endl;
    else
    {
        if (a + b <= c)
        {
            s += (c - (a + b)) + 1;
            a += s;
        }
        else if (a + c <= b)
        {
            s += (b - (a + c)) + 1;
            c += s;
        }
        else if (c + b <= a)
        {
            s += (a - (c + b)) + 1;
            b += s;
        }
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            cout << s << endl;
        }
    }
}