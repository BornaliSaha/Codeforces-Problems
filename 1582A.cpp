#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b&&b==c)
            cout<<"0"<<endl;
        else{
            int s=a+b*2+c*3;
            if(s%2==0)
                cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
    }
}
