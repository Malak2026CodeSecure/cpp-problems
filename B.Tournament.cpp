#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        bool find = false;
        int n, j, k;
        cin >> n >> j >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
        }
        if (k == 1 && a[j - 1] != max)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}