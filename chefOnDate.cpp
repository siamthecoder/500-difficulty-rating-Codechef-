#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, X, Y;

    cin >> t;

    while (t != 0)
    {
        cin >> X >> Y;

        if (Y <= X)
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