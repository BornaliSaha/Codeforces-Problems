#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,mini=240,i=1,j=0;
    cin>>n>>k;
    mini=240-k;
    for(i=1;i<=n;i++)
    {
       if(mini>=i*5)
       {
           j++;
           mini=mini-5*i;
       }
    }
    cout<<j<<endl;

    return 0;
}
