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
            cout << X << endl;
        }
        else
        {
            cout << Y << endl;
        }
        t--;
    }

    return 0;
}