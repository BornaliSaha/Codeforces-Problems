#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void saha()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    for(int i=0;i<n;i++)
    {
        bool ck=false;
        while(arr[i]=='o' && arr[i+1]=='g'&&arr[i+2]=='o')
        {
            ck=true;
            i+=2;
        }
        if(!ck)
            cout<<arr[i];
        else cout<<"***";
    }
 
}
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
        saha();
}
