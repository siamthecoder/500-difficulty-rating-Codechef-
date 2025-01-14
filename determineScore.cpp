#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, t;

    cin >> t;

    while (t != 0)
    {
        cin >> x >> n;

        cout << (x / 10) * n << endl;

        t--;
    }

    return 0;
}