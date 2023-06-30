#include <stdio.h>

int main()
{
  int i,c,n,r;
  printf("Enter the number of matrix : ");
  scanf("%d",&n);
  int a[n][n];
  for(i=1;i<=n*n;i++)
  {
      r=(n-i%n+1+2*((i-1)/n))%n;
      c=((n-1)/2+i-1-(i-1)/n)%n;
      a[r][c]=i;
  }
  for(r=0;r<n;r++)
  {
      for(c=0;c<n;c++)
      {
          printf("%d\t",a[r][c]);
      }
      printf("\n");
  }
  printf("%s", "\U0001f600 ");
  return 0;
}
