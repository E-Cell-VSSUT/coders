#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,d,p,q,r,Q,amt=0;
        cin>>D>>d>>p>>q;
        r = D/d;
        Q = D%d;
        for(int i=1;i<=(r-1);i++)
        {
            amt += d*(i*q);
        }
        amt += D*p + Q*(q*r);
        cout<<amt<<endl;

    }
    return 0;
}