#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    while (q > 0)
    {
        bool found = false;
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x == a[mid])
            {
                found = true;
                break;
            }
            else if (x > a[mid])
            {
                l = mid + 1;
            }
            else if (x < a[mid])
                r = mid - 1;
        }
        if (found)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
        q--;
    }
}