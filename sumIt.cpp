#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, A, B, C;

    cin >> t;

    while (t != 0)
    {
        cin >> A >> B >> C;

        if ((A + B) != C)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

        t--;
    }

    return 0;
}