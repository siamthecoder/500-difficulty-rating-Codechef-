#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, T;

    cin >> T;

    while (T != 0)
    {
        cin >> X >> Y;

        if (X > Y)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }

        T--;
    }

    return 0;
}