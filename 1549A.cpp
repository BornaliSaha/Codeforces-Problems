#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void saha()
{
    ll p;
    cin>>p;
    if(p&1)
        cout<<"2 "<<p-1<<endl;
    else cout<<"2 "<<p<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        saha();
}
