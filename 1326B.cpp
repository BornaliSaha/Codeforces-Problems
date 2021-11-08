#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void spectrum()
{
    int n,Mx=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<Mx+arr[i]<<" ";
        Mx = max(Mx,arr[i]+Mx);
    }
}
int main()
{
    spectrum();
}
