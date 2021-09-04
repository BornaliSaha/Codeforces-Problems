#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,k,res;
    cin>>n>>k;
    if(n%2==0)
    {
        res=n/2;
    }
 
    else {
        res=n/2+1;
    }
    if(k<=res)
    {
        cout<<((2*k)-1);
    }
    else
    {
        cout<<(k-res)*2;
    }
 
	return 0;
}
