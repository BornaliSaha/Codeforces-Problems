#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c,w,x,y,z,v;
    int arr[100],i=0,temp,j;
 
    cin>>a>>b>>c;
    arr[0]=a+b+c;
    arr[1]=a+(b*c);
    arr[2]=a*(b+c);
    arr[3]=a*b*c;
    arr[4]=(a+b)*c;
    for(i=0;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<arr[0];

	return 0;
}
