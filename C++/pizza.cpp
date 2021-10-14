#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
void solution()
{
    ll f;
    cin >> f;
    ll s;
    if (f <= 6)
        s = 15;
    else
    {
        if (f % 2 != 0)
            f++;
        s = (f * 5) / 2;
    }
    cout << s << endl;
}
int main()
{
    fastread();
    ll k;
    cin >> k;
    while (k--)
    {
        solution();
    }
    return 0;
}