#include<bits/stdc++.h>
using namespace std;
 
void saha()
{
    map<char,int>mp;
    //map<string,int>::iterator it;
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            mp[s[j]]++;
        }
    }int Tm=0;
    for(auto &pr:mp)
    {
        if(pr.second%n!=0)
        {
            Tm=1;
        }
    }
    if(Tm==0)cout<<"YES\n";
    else cout<<"NO\n";
 
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        saha();
}
