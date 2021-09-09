#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        int Tm=0;
        cin>>n>>s;
        if(n==1)
        {
            cout<<"-1 -1"<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if((s[i]=='a'&&s[i+1]=='b')||(s[i]=='b'&&s[i+1]=='a'))
                {
                    cout<<i+1<<" "<<i+2<<endl;
                    Tm=1;
                    break;
                }
            }
            if(Tm==0)cout<<"-1 -1"<<endl;
        }
 
    }
 
}
