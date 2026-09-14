#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    long long m = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (A[i] < A[i - 1])
        {
            long long x = A[i - 1] - A[i];
            m += x;
            A[i] += x;
        }
    }

    cout << m << endl;
}