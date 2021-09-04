#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i=2,temp=1,temp2=0,ck=0;
    cin>>n;
    if(n==1)cout<<1;
    else
    {
         while(temp2<n)
            {
                temp=temp+i;
                temp2=temp2+temp;
                i++;
                ck++;
            }
    cout<<ck;
    }
    return 0;
}
