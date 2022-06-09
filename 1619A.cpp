    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            string s;
            cin>>s;
            int l=s.size(),ck=0;
            if(l&1)
                cout<<"NO\n";
            else
            {
                l=l/2;
                for(int i=0,j=l;i<l;i++,j++)
                {
                    if(s[i]!=s[j])
                    {
                        ck=1;
                        break;
                    }
                }
                if(ck==0)cout<<"YES\n";
                else cout<<"NO\n";
            }
     
        }
    }
