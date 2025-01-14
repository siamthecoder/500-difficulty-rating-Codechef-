#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, X, H;

    cin >> t;

    while (t != 0)
    {

        cin >> X >> H;

        if (H <= X)
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