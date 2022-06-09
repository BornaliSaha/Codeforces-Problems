    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int main()
    {
        ll t,n,Tm=0;
        cin>>t;
        while(t--)
        {
            Tm=0;
            cin>>n;
            for(int i=1;i<=9;i++)
            {
                ll res=0;
                while(i)
                {
                    res=res*10+i;
                    if(res<=n)Tm++;
                    else break;
                }
            }
            cout<<Tm<<endl;
        }
     
     
    }
