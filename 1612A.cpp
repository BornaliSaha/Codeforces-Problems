#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void saha()
{
    int a,b;
    cin>>a>>b;
    if((a+b)&1)
        cout<<"-1 -1\n";
    else if(a%2==0 && b%2==0)
        cout<<a/2<<" "<<b/2<<endl;
    else  cout<<(a/2)+1<<" "<<b/2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        saha();
}
