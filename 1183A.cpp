#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool saha(int a)
{
    int r,sum=0;
    while(a)
    {
        int r=a%10;
        sum+=r;
        a/=10;
    }
    if(sum%4==0)
        return true;
    return false;
}
int main()
{
    int a,t=1;
    cin>>a;
    while(t)
    {
        if(saha(a))
        {
            cout<<a<<endl;
            t=0;
        }
        else a++;
    }

}
