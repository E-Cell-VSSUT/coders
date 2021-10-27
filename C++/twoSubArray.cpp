#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        float n,sum=0;
        cin>>n;
        vector<float> a;
        for(ll i=0;i<n;i++){
            ll k;
            cin>>k;      
            a.pb(k);
            sum += k;
        }
        sort(a.begin(),a.end());
        float ans = (a.back() + (sum - a.back())/(n-1));
        cout<<ans<<endl;
    }
    return 0;
}