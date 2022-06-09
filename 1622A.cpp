    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int32_t main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            int a[3];
            cin>>a[0]>>a[1]>>a[2];
            sort(a,a+3);
            if(a[0]+a[1]==a[2])
                cout<<"YES\n";
            else if(a[1]==a[2] && a[0]%2==0)
                cout<<"YES\n";
            else if(a[0]==a[1]&&a[2]%2==0)
                cout<<"YES\n";
            else cout<<"NO\n";
     
        }
        return 0;
    }
