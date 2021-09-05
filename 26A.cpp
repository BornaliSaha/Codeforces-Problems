#include<bits/stdc++.h>
using namespace std;
 
int mark[3005],nprime=0;
int Prime[10000];
 
///1 if not prime, 0 if prime
void sieve(int n)
{
    int i,j,limit=sqrt(n)+2;
    mark[1]=1;
    for(i=4;i<=n;i+=2)
        mark[i]=1;
    Prime[nprime++]=2;
 
    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            Prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i;j<=n;j=j+2*i)
                {
                    mark[j]=1;
                }
            }
        }
    }
}
 
int main()
{
    int i,n,ck=0,j=0,Count=0;
    cin>>n;
    sieve(n);
    for(i=6;i<=n;i++)
        {
            for(j=0;j<nprime;j++)
            {
                if(i%Prime[j]==0)
                {
                    ck++;
                }
            }
            if(ck==2)
            {
                Count++;
            }
            ck=0;
        }
        cout<<Count;
 
    return 0;
}
