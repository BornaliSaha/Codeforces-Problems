    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    void saha()
    {
        ll n,sum=0,x;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        if(sum%n == 0)
            cout<<"0\n";
        else  cout<<"1\n";
    }
    int32_t main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t,n;
        cin>>t;
        while(t--) saha();
     
    }
