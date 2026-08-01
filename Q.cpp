#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{

    string n1, n2;
    cin >> n1 >> n2;

    int sum1 = stoi(n1) + stoi(n2);
    string s1 = to_string(sum1);

    for (int i = 0; i < n1.size(); i++)
    {
        if (n1[i] == '0')
        {
            n1 = n1.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < n2.size(); i++)
    {
        if (n2[i] == '0')
        {
            n2 = n2.erase(i, 1);
            i--;
        }
    }

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '0')
        {
            s1 = s1.erase(i, 1);
            i--;
        }
    }

    int ss1 = stoi(s1);
    if (n1 == "")
        n1 = "0";
    if (n2 == "")
        n2 = "0";
    if (s1 == "")
        s1 = "0";
    int sum2 = stoi(n1) + stoi(n2);
    if (ss1 == sum2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}