#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,c=1;
        cin>>k;
        vector<int> a;
        for(int i=0;i<1000;i++){
            if(c%3!=0||c%10!=3){
                a.pb(c);
            }
            c++;
        }
        cout<<"ANS: "<<a.back()<<endl;
    }
    return 0;
}