#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max = a[0], sec = -1000000000;
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i] > max)
            {
                sec = max;
                max = a[i];
            }
            if (a[i] > sec && max != a[i])
            {
                sec = a[i];
            }
        }
        cout << sec << endl;
    }
}