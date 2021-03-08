#include<stdio.h>
int main()
{
  int n,m=0,i=1,j=1,h[3]={2,3,5};
  scanf("%d",&n);
  m=n;
  while(i>0)
      {
        for(j=1;j!=3;)
        {
         if(m%h[j]==0)
            {
                m=h[j];
            }
         else j++;
        }
       i++;

      }
}
