#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Solve()
{
    char ch[10][10];
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++)
            cin>>ch[i][j];
    }
    int l,r;

    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(ch[i][j]=='#' && ch[i-1][j-1]=='#' && ch[i-1][j+1]=='#' && ch[i+1][j-1]=='#' && ch[i+1][j+1]=='#')
            {
                cout<<i<<' '<<j<<endl;
                return;
            }
        }
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
        Solve();
}
