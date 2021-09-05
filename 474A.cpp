#include <bits/stdc++.h>
using namespace std;
 
char arr1[50]={'q','w','e','r','t','y','u','i','o','p','\0'};
char arr2[50]={'a','s','d','f','g','h','j','k','l',';','\0'};
char arr3[50]={'z','x','c','v','b','n','m',',','.','/','\0'};
 
 
int main()
{
    char x,ch[105];
    cin>>x>>ch;
    int i;
    if(x=='R')
    {
        for(i=0;ch[i]!='\0';i++)
        {
            for(int j=0;arr1[j]!='\0';j++)
            {
                if(ch[i]==arr1[j])
                {
                    cout<<arr1[j-1];
                }
            }
            for(int j=0;arr2[j]!='\0';j++)
            {
                if(ch[i]==arr2[j])
                {
                    cout<<arr2[j-1];
                }
            }
            for(int j=0;arr3[j]!='\0';j++)
            {
                if(ch[i]==arr3[j])
                {
                    cout<<arr3[j-1];
                }
            }
        }
    }
 
    else
    {
        for(i=0;ch[i]!='\0';i++)
        {
            for(int j=0;arr1[j]!='\0';j++)
            {
                if(ch[i]==arr1[j])
                {
                    cout<<arr1[j+1];
                }
            }
            for(int j=0;arr2[j]!='\0';j++)
            {
                if(ch[i]==arr2[j])
                {
                    cout<<arr2[j+1];
                }
            }
            for(int j=0;arr3[j]!='\0';j++)
            {
                if(ch[i]==arr3[j])
                {
                    cout<<arr3[j+1];
                }
            }
        }
    }
    cout<<endl;
    return 0;
 
}
