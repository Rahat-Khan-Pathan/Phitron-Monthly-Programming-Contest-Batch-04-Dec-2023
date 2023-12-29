// Question - Rahat Khan Pathan
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, a, b;
        cin >> h >> a >> b;
        if (h <= a)
        {
            cout << 1 << endl;
        }
        else if (a > b)
        {
            ll ans = ceil((h - a) * 1.0 / (a - b) * 1.0);
            cout << ans * 2 + 1 << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}