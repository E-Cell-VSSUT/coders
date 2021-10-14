#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main(){
    fastread();
    ll k,n,w,tc,b;
    cin>>k>>n>>w;
    tc = ((w*(w+1))/2)*k;
    if(tc>n){
        b= tc-n;
    }
    else{
        b=0;
    }
    cout<<b<<endl;
    return 0;

}