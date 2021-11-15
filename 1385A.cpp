#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[1]==arr[2])
        {
            cout<<"YES\n"<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<endl;
        }
        else cout<<"NO\n";
    }
}
