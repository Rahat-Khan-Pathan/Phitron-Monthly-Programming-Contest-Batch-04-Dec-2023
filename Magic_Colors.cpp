// Question - Rahat Khan Pathan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        stack<char> s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (!s.empty() && s.top() == c)
                s.pop();
            else if (c == 'R')
            {
                if (!s.empty() && s.top() == 'B')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'P')
                        s.pop();
                    else
                        s.push('P');
                }
                else if (!s.empty() && s.top() == 'G')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'Y')
                        s.pop();
                    else
                        s.push('Y');
                }
                else
                    s.push(c);
            }
            else if (c == 'B')
            {
                if (!s.empty() && s.top() == 'R')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'P')
                        s.pop();
                    else
                        s.push('P');
                }
                else if (!s.empty() && s.top() == 'G')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'C')
                        s.pop();
                    else
                        s.push('C');
                }
                else
                    s.push(c);
            }
            else
            {
                if (!s.empty() && s.top() == 'R')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'Y')
                        s.pop();
                    else
                        s.push('Y');
                }
                else if (!s.empty() && s.top() == 'B')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'C')
                        s.pop();
                    else
                        s.push('C');
                }
                else
                    s.push(c);
            }
        }
        stack<char> q;
        while (!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        while (!q.empty())
        {
            cout << q.top();
            q.pop();
        }
        cout << endl;
    }
    return 0;
}
