#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int Tm=arr[0];
        for(int i=0;i<n;i++)
        {
            Tm&=arr[i];
        }
        cout<<Tm<<endl;
    }
 
}
