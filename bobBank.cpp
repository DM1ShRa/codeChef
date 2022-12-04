#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        e = b - c;
        cout << a + e * d << endl;
    }
    return 0;
}