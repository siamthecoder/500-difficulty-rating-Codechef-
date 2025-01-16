#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, X, Y;

    cin >> t;

    while (t != 0)
    {
        cin >> X >> Y;

        cout << (X * 10) + (Y * 90) << endl;

        t--;
    }

    return 0;
}