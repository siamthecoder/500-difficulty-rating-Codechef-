#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, G, B;

    cin >> t;

    while (t != 0)
    {
        cin >> G >> B;

        cout << B - G << endl;

        t--;
    }

    return 0;
}