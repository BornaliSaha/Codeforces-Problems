#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void saha()
{
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    if(s%n > b)
        cout<<"NO\n";
    else
    {
        if(a*n+b >=s)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        saha();
}
