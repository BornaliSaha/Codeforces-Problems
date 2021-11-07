#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void spectrum()
{
    ll ar[105],n,Tm=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        Tm=max(Tm,x-i);
    }
    cout<<Tm-1<<endl;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
    spectrum();
}
