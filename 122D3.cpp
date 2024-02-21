#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x[22], i;
        for (i = 0; i < 22; i++)
        {
            int a, b;
            cin >> a >> b;
            int score = a * 1 + b * 20;
            x[i] = score;
        }
        int m = 0;
        int max = x[0];
        for (int i = 1; i < 22; i++)
        {
            if (x[i] > max)
            {
                max = x[i];
                m = i;
            }
        }
        m = m + 1;
        cout << m << endl;
    }
}
