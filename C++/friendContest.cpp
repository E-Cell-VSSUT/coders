#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int m,j,k;
        cin>>m>>j>>k;
        if((m+j+k)>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}