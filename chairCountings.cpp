#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, X, Y;

    cin >> t;

    while (t != 0)
    {
        cin >> X >> Y;

        if (X > Y)
        {
            cout << X - Y << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}