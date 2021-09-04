#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,n;
    int i,len;
    cin>>s;
    len=s.size();
    for(i=0;i<len;i+=2)
    {
        for(int j=i+2;j<len;j+=2)
        {
            if(s[i]>s[j])
            {
                int temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<len;i++)
    {
        cout<<s[i];
    }
 
	return 0;
}
