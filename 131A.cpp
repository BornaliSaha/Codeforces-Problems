#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int i, arr[100],len;
    cin>>s;
    len=s.size();
    for(i=1;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            cout<<s;
            return 0;
        }
    }
    for(i=0;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]-32;
        else s[i]=s[i]+32;
    }
    cout<<s;
 
	return 0;
}
