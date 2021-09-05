#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,n,r,temp;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        r=i;temp=0;
        while(r!=0)
        {
            int mod=r%10;
            if(mod!=4&&mod!=7)
            {
                temp=1;
            }
            r/=10;
        }
        if(temp==0)
        {
            if(n%i==0)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
