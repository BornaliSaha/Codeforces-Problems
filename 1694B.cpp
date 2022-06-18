    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    void Solve()
    {
        ll n,cnt=0;
        string s;
        cin>>n>>s;
        ll ans=n;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1])
                ans+=i;
        }
     
        cout<<ans<<endl;
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
