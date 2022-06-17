    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    void Solve()
    {
        int n,x;
        cin>>n;
        int ar[n+5];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[ar[i]]++;
        }
        int ln=mp.size();
        if(ln==n) cout<<n<<endl;
        else if((n-ln)&1) cout<<ln-1<<endl;
        else cout<<ln<<endl;

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
