#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void spectrum()
{
    ll n,k;
    cin>>n>>k;
    if(k%n==0)cout<<k/n<<endl;
    else if(n>k)
    {
        if(n%k==0)cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    else if(k>n)cout<<k/n+1<<endl;
    else cout<<n/k+1<<endl;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
        spectrum();
}
