    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int main()
    {
        set<ll>s;
        ll x,i;
        for(i=1;i<=33000;i++)
        {
            x=i*i;
            s.insert(x);
            x=i*i*i;
            s.insert(x);
        }
        ll t;
        cin>>t;
        while(t--)
        {
            ll ck=0;
            cin>>x;
            for(auto it=s.begin();it!=s.end();it++)
            {
                if(*it <= x)
                {
                    ck++;
                }
                if(*it>x)break;
            }
            cout<<ck<<endl;
        }
     
    }
