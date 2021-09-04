#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int t,h,m,hour,mini,total;
   cin>>t;
   while(t--)
   {
       cin>>h>>m;
       total=0;
        hour=(23-h)*60;
        mini=60-m;
        total=hour+mini;
        cout<<total<<endl;
   }
 
 
    return 0;
}
