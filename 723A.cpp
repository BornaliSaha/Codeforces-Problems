#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[10],res,i,j;
    for(i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
 
    res=(arr[1]-arr[0])+(arr[2]-arr[1]);
    cout<<res;
	return 0;
}
