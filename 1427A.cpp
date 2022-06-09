    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    void its_ok()
    {
        int n;
        cin>>n;
        int ar[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum==0)
            cout<<"NO\n";
        else
        {
            sort(ar,ar+n);
            cout<<"YES\n";
            if(sum<0)
            {
                for(int i=0;i<n;i++)
                    cout<<ar[i]<<" ";
                cout<<'\n';
            }
            else
            {
                reverse(ar,ar+n);
                for(int i=0;i<n;i++)
                    cout<<ar[i]<<" ";
                cout<<'\n';
            }
     
        }
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--)
            its_ok();
    }
