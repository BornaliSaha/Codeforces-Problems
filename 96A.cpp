#include<stdio.h>
 
int main()
{
   char ch[100];
   int i,j,ck=0,len=0;
   scanf("%s",&ch);
   len=strlen(ch);
   for(i=0;i<len;i++)
   {
       ck=0;
       for(j=i+1;j<(i+7);j++)
       {
           if(ch[i]!=ch[j])
           {
               break;
           }
           else ck++;
       }
       if(ck>=6)
       {
            printf("YES");
            return 0;
       }
   }
   printf("NO");
    return 0;
}
