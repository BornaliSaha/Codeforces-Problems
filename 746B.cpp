#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    string s;
    char str[2010];
    cin>>n>>s;
    int l=0,r=n-1,ck=0;
    for(int i=n-1;i>=0;i--)
    {
        if(ck==0)
        {
            str[r--]=s[i];
            ck=1;
        }
        else
        {
            str[l++]=s[i];
            ck=0;
        }
    }
    str[n]='\0';
    cout<<str<<endl;
 
}
