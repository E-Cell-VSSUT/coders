#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
using namespace std;

int main(){
    fastread();
    ll t;
    cin>>t;
    while(t--){
        float x,y;
        cin>>x>>y;
        if((x+y)>=6){
            cout<<0<<endl;
        }
        else{
            cout<<((6-(x+y))/6)<<endl;
        }
    }
    return 0;
}