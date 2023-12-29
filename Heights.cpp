// Question - Mazharul Islam Rifat
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int maxLeft[n], maxRight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxLeft[i] = -1;
        maxRight[i] = -1;
    }

    int x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        maxLeft[i] = max(maxLeft[i], x);
        x = max(x, a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        maxRight[i] = max(maxRight[i], y);
        y = max(y, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << maxLeft[i] << " " << maxRight[i] << endl;
    }
    return 0;
}