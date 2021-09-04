#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,odd=0,even=0,x,ev,od;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            even++;
            ev=i;
        }
 
        else
        {
            odd++;
            od=i;
        }
    }
    if(odd==1)cout<<od;
    else cout<<ev;
 
	return 0;
}
