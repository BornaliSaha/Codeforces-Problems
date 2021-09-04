#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,x,y,z,x1=0,y1=0,z1=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        x1=x1+x;
        y1=y1+y;
        z1=z1+z;
    }
    if(x1==0&&y1==0&&z1==0)
        cout<<"YES";
    else cout<<"NO";
 
 
	return 0;
}
