#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,arr[105],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
 
    return 0;
}
