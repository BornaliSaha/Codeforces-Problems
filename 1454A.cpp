#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,t,j=2;
    cin>>t;
    while(t--)
    {
    cin>>n;
    j=2;
    for(int i=1;i<n;i++)
    {
        cout<<j<<" ";
        j++;
    }
    cout<<1<<endl;
    }
 
 
    return 0;
}
