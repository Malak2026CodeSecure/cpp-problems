#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = 1, max = 0;
    int n = s.size();
    if (n == 1)
        cout << 1 << endl;
    else
    {
        for (int i = 1; i <= n - 1; i++)
        {

            if (s[i - 1] == s[i])
                x++;
            else
                x = 1;
            if (x >= max)
                max = x;
        }
        cout << max << endl;
    }
}