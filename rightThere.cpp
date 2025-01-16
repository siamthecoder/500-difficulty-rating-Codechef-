#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, N, X;

    cin >> t;

    while (t != 0)
    {
        cin >> N >> X;

        if (N <= X)
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