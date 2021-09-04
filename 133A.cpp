#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int ck=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            ck=1;
        }
    }
 
    if(ck==1)cout<<"YES";
    else cout<<"NO";
 
	return 0;
}
