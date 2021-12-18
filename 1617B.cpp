#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void saha()
{
    ll n,i;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        ll x=n-i-1;
        if(__gcd(x,i)==1)
        {
            cout<<x<<" "<<i<<" "<<"1\n";
            break;
        }
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        saha();
}
