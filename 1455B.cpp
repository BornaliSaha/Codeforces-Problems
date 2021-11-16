#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void saha()
{
    int x;
    cin>>x;
    int k=1,sum=0;
    while(sum<x)
    {
        sum+=k;
        k++;
    }
    //cout<<sum<<" "<<k<<endl;
    if((sum-x)==1)
        cout<<k<<endl;
    else cout<<k-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        saha();
}
