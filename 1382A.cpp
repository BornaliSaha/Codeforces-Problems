#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x=0;       
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    cout<<"YES\n"<<"1 "<<a[i]<<endl;
                    x=1;
                    break;
                }
            }
            if(x==1)break;
        }
        if(x==0)cout<<"NO\n";
    }
}
