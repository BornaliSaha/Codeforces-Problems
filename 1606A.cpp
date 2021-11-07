#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,i=0;
   string s;
   cin>>t;
   while(t--)
   {
       cin>>s;
       int l=s.length();
       if(s[i]==s[l-1])
        cout<<s<<endl;
       else
       {
           s[l-1]=s[i];
           cout<<s<<endl;
       }
   }
}
