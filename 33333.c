#include<stdio.h>
int main()
{
  int n,m=0,i=1,j=0,k=0,h[3]={2,3,5};
  scanf("%d",&n);
   for(i=1;i>0;i++)
    {
        m=i;
        for(j=0;j!=3;)
        {
         if(m%h[j]==0)
            {
                m/=h[j];
            }
         else j++;
        }
       if(m==1)
        {
            k++;
            if(k==n)
            {
                printf("%d",i);
                break;
            }
        }
      }
}
