#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    long long n;
    cin >> n;
    long long total = 0;
    vector<long long> a;
    int i = 2;
    while (n != 1)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            n /= i;
            total += i;
        }
        else
        {
            i++;
        }
    }

    if (total > 41)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 1; i <= 41 - total; i++)
        {
            a.push_back(1);
        }

        cout << a.size() << " ";
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}