#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void saha()
{
    ll arr[10];
    for(int i=0;i<7;i++)
        cin>>arr[i];
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[6]-(arr[0]+arr[1])<<endl;
 
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        saha();
}
