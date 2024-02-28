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
        int a[n];
        int room = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            room = room + ((a[i] + 1) / 2);
        }
        cout << room << endl;
    }
}
