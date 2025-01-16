#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, X, Y;

    cin >> A >> B >> X >> Y;

    if ((A * 2) + (B * 1) > (X * 2) + (Y * 1))
    {
        cout << "MESSI" << endl;
    }
    else if ((A * 2) + (B * 1) == (X * 2) + (Y * 1))
    {
        cout << "EQUAL" << endl;
    }
    else
    {
        cout << "RONALDO" << endl;
    }

    return 0;
}