#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, a, b, c;

    cin >> N;

    while (N != 0)
    {
        cin >> a >> b >> c;

        if (a > b && a > c)
        {
            if (b > c)
            {
                cout << b << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        else if (b > a && b > c)
        {
            if (a > c)
            {
                cout << a << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        else if (c > a && c > b)
        {
            if (a > b)
            {
                cout << a << endl;
            }
            else
            {
                cout << b << endl;
            }
        }
        N--;
    }

    return 0;
}