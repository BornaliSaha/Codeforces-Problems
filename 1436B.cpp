#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void saha()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)cout<<"1 ";
            else if(i+1==j)cout<<"1 ";
            else if(i==n && j==n) cout<<"1 ";
            else if(i==n && j==1) cout<<"1 ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        saha();
}
