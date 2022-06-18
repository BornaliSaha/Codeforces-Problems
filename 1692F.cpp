#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Solve()
{
    int n,x;
    cin>>n;
    int ar[15]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        ar[x%10]++;
    }
    vector<int>vec;
    for(int i=0;i<10;i++){
        for(int j=0;j<min(ar[i],3);j++)
            vec.push_back(i);
    }
//    for(int i=0;i<vec.size();i++){
//        cout<<vec[i]<<' ';
//    }
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            for(int k=j+1;k<vec.size();k++){
                if((vec[i]+vec[j]+vec[k])%10 == 3){
                    cout<<"YES\n";
                    return;
                }

            }
        }
    }
    cout<<"NO\n";
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
