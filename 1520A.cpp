    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    void saha()
    {
        int n;cin>>n;
        string s;
        bool tm=false;
        cin>>s;
        map<char,int>mp;
        char c;
        for(int i=0;i<s.size();i++)
        {
            c = s[i];
            if(c == s[i-1]&&i!=0)
                continue;
            else
            {
                if(mp[c]==1)
                {
                    tm=true;
                    break;
                }
                else mp[c]=1;
            }
        }
        if(tm==false)
            cout<<"YES\n";
        else cout<<"NO\n";
     
    }
    int32_t main()
    {
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        while(t--)saha();
    }
