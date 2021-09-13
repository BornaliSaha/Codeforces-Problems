#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void spectrum()
{
    ll n,s;
    cin>>n>>s;
    n=n/2+1;
    cout<<s/n<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        spectrum();
}
