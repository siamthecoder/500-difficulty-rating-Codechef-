#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, X, Y;

    cin >> N >> M;
    cin.ignore();
    cin >> X >> Y;

    cout << (N * X) + (M * Y) << endl;

    return 0;
}