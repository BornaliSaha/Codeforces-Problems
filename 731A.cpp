#include<bits/stdc++.h>
using namespace std;
 
void saha()
{
    string s;
    char c='a';
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans+= min(abs(c-s[i]),26-abs(c-s[i]));
        c=s[i];
    }
    cout<<ans<<endl;
}
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
        saha();
}
