#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, X;

    cin >> t;

    while (t != 0)
    {
        cin >> X;

        if ((X * 4) <= 1000)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}