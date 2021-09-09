#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,Tm=0,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        Tm= 360%(180-n);
        (Tm==0)?(cout<<"YES\n"):(cout<<"NO\n");
    }

}
