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
            cout << "LOSS" << endl;
        }
        else if (X == Y)
        {
            cout << "NEUTRAL" << endl;
        }
        else
        {
            cout << "PROFIT" << endl;
        }
        t--;
    }

    return 0;
}