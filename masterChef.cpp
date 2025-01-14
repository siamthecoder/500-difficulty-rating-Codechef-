#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, t;

    cin >> t;
    while (t != 0)
    {
        cin >> x;
        if (x <= 10)
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