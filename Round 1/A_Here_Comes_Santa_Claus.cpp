#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;

    float a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << fixed;
    sort(a, a + n);

    if (n == 5)
    {
        float x = (a[0] + a[2]) / 2;
        float b = (a[n - 1] + a[n - 2]) / 2;

        float c = (a[0] + a[1]) / 2;
        float d = (a[n - 1] + a[n - 3]) / 2;

        float e = b - x;
        float f = d - c;

        cout << max(e, f) << endl;
        return;
    }
    else
    {
        float x = (a[0] + a[1]) / 2;
        float b = (a[n - 1] + a[n - 2]) / 2;

        cout << b - x << endl;
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