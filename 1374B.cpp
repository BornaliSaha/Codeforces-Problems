#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,ct=0,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ct=0;
        cin>>n;
        while(n>1)
        {
            if(n%6)
                n=n*2;
            else n=n/6;
            ct++;
        }
        if(n==1)
            cout<<ct<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
