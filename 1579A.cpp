#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void saha()
{
    string s;
    cin>>s;
    int ck=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
            ck++;
    }
    if(ck*2 == s.size())
        cout<<"YES\n";
    else cout<<"NO\n";
 
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        saha();
}
