#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void saha()
{
    int n,Tm=0,x,y;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    for(int i=0;i<n;i++)
    {
        x=abs((s[i]-'0')-(s1[i]-'0'));
        y=10-abs((s[i]-'0')-(s1[i]-'0'));
        Tm+=min(x,y);
    }
    cout<<Tm<<endl;
}
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
        saha();
}
