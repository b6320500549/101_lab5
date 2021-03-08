#include<stdio.h>
int main()
{
  int n,m=0,i,j=0;
  scanf("%d",&n);
  for(i=2;i<=n;i++)
      {
        if(i%2==0||i%3==0||i%5==0)
        {
         j++;
        }
      }
  printf("%d",j+1);
}
