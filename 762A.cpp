    #include<bits/stdc++.h>
    #define pb push_back
    using namespace std;
    typedef long long ll;
     
    int32_t main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<ll>v;
        ll n,k,i;
        cin>>n>>k;
        for(i=1;i*i<=n;i++){
            if(n%i == 0){
                v.pb(i);
                if(i!=n/i)
                    v.pb(n/i);
            }
        }
        sort(v.begin(),v.end());
        if(v.size()<k)
            cout<<"-1\n";
        else cout<<v[k-1]<<endl;
    //    for(auto x: v)
    //        cout<<x<<' ';
    }
