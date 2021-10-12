#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        ll ans = 0;
        for (auto i : mp)
        {
            ans += ((n - i.second) * i.second);
        }
        cout << ans << endl;
    }
    return 0;
}