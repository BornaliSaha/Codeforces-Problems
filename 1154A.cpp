#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int ct,a,b,c,i,big=0;
    int arr[5];
    for(i=0;i<4;i++)
    {
        cin>>arr[i];
        if(arr[i]>big)
        {
            big=arr[i];
            ct=i;
        }
    }
    for(i=0;i<4;i++)
    {
        if(i!=ct)
        {
            cout<<big-arr[i]<<" ";
        }
    }
 
	return 0;
}
