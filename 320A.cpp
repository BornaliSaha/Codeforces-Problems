#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool magic(string n)
{
    ll l=n.size();
    if(n[0]!='1')return false;
    for(int i=0;i<l;i++)
    {
        if(n[i]!='1' && n[i]!='4')
            return false;
        if(n[i]=='4'&&n[i+1]=='4'&&n[i+2]=='4')
            return false;
    }

    return true;
}
int main()
{
    string n;
    cin>>n;
    if(magic(n))
        cout<<"YES\n";
    else cout<<"NO\n";
}
