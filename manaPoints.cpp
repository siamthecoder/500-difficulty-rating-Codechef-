#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, X, Y;

    cin >> t;

    while (t != 0)
    {
        cin >> X >> Y;

        if (Y >= X)
        {
            cout << Y / X << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}