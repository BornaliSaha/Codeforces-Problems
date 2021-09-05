#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,Sere=0,Dima=0,i,j,left,right;
    int arr[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    left=0,right =n-1;
    while(left<=right)
    {
        if(arr[left]>arr[right])
           {
               Sere=Sere+arr[left];
               left++;
           }
        else {
                Sere=Sere+arr[right];
                right--;
            }
            if(left<=right)
            {
                if(arr[left]>arr[right])
                {
                    Dima=Dima+arr[left];
                    left++;
                }
            else {
                    Dima=Dima+arr[right];
                    right--;
                }
            }
    }
    cout<<Sere<<" "<<Dima;
 
    return 0;
}
