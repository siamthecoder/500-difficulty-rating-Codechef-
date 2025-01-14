#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, t;

    cin >> t;

    while (t != 0)
    {
        cin >> X;

        if (X >= 30)
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