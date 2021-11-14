#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int a1[n],a2[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a2[i];
    }
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(a1[i]==1&&a2[i]==0)x++;
        if(a1[i]==0&&a2[i]==1)y++;
    }
    if(x==0)
        cout<<"-1"<<endl;
    else
    {
        cout<< (y/x)+1<<endl;
    }

}
