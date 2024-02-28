// TLE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long total = 0;
        for (long long i = 2; i < n - 1; i++)
        {
            total = total + min(i, i + 1);
        }
        total += 2 + 2;

        cout << total << endl;
    }
}