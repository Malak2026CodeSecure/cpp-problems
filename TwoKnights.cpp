#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; ++i)
    {
        long long attak = 4 * (i - 2) * (i - 1);
        long long total = ((i * i) * ((i * i) - 1)) / 2;
        cout << total - attak << endl;
    }
}