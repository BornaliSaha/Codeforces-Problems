    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    void saha()
    {
        string s;
        cin>>s;
        int ck=0;
        int ln=s.size();
        for(int i=0;i<ln;i++)
            if(s[i]=='N')
                ck++;
        if(ck==1)
            cout<<"NO\n";
        else cout<<"YES\n";
    }
    int32_t main()
    {
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        while(t--)saha();
    }
