#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void saha()
{
    int n;
    string s,s1;
    cin>>n;
    cin>>s1;
    for(int i=1;i<n-2;i++)
    {
        cin>>s;
        if(s1[s1.size()-1]==s[0])
            s1+=s[1];
        else s1+=s;
    }
    if(s1.size()<n)
        cout<<s1<<'a'<<endl;
    else cout<<s1<<endl;
 
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        saha();
}
