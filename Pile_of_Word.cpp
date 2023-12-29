// Question - Rahat Khan Pathan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}