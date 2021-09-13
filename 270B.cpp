#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int n,Tm=0,k=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
 
    for(int i=1;i<n;i++)
    {
         if(arr[i]<arr[i-1]) Tm=i;
    }
    cout<<Tm<<endl;
 
}
