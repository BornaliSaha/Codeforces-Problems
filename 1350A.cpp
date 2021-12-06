#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,k,j=0,res;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==0)
            res=n+2*k;
        else
        {
            for(int i=2;i<=n;i++)
            {
                if(n%i==0)
                {
                    j=i;
                    break;
                }
            }
            res = n + j + 2*(k-1);
        }
        cout<<res<<endl;
    }
 
 
 
    return 0;
}
