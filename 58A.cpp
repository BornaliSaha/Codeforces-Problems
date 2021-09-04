#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    char ch[100];
    int len=0,i,ct=0;
    cin>>s;
    len=s.size();
    if(len<5)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        for(i=0;i<len;i++)
        {
            if(s[i]=='h')
            {
            ct++;
            i++;
            break;
        }
        }
        for(;i<len;i++)
        {
         if(s[i]=='e')
            {
            ct++;
            i++;
            break;
        }
    }
    for(;i<len;i++)
        {
            if(s[i]=='l')
            {
            ct++;
            i++;
            break;
        }
        }
        for(;i<len;i++)
        {
            if(s[i]=='l')
            {
            ct++;
            i++;
            break;
        }
        }
        for(;i<len;i++)
        {
            if(s[i]=='o')
            {
            ct++;
            i++;
            break;
        }
        }
    }
        if(ct>=5)cout<<"YES";
        else cout<<"NO";
 
	return 0;
}
