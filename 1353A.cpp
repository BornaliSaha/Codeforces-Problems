    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    void its_ok()
    {
        ll n,m;
        cin>>n>>m;
        if(n==1)
            cout<<"0\n";
        else if(n==2)
            cout<<m<<'\n';
        else
            cout<<2*m<<'\n';
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--)
            its_ok();
    }
