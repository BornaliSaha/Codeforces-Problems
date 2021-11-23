#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void saha()
{
    int a,b,c;
    cin>>a>>b>>c;
    int Tm= a+c - 2*b;
    if(Tm%3==0)
        cout<<"0\n";
    else cout<<"1\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        saha();
}
