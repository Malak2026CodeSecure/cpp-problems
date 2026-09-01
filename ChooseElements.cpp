#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long max = a[0];
    long long sum = 0;
    sort(a, a + n);
    for (int i = n - 1; i >= n - k; i--)
    {
        if (a[i] > 0)
            sum += a[i];
    }

    cout << sum << endl;
}