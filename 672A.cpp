#include<bits/stdc++.h>
using namespace std;
 
int saha(int n)
{
    int i=1,temp=1;
    while(i<=n)
    {
      if(temp<10)
        {
            if(i==n)
               return temp;
            i++;
        }
      else if(temp>=10&&temp<=99)
        {
            if(i==n)
               return temp/10;
            else if(i+1==n)
                return temp%10;
            i+=2;
        }
      else if(temp>=100&&temp<=999)
      {
          if(i==n)
            return temp/100;
          else if(i+1==n)
            return (temp/10)%10;
          else if(i+2==n)
            return temp%10;
          i+=3;
      }
      else{
        if(i==n)
            return 1;
        else return 0;
        i+=4;
      }
      temp++;
    }
}
 
int main()
{
    int n;
    cin>>n;
    cout<<saha(n)<<endl;
 
    return 0;
}
