#include<stdio.h>


int main()
{
  int n,i,j,m,b,s;

  printf("\n\n\t PLEASE ENTER THE NO. OF LAYERS");
  scanf("%d",&n);
  m=(n+1)/2;
  for(i=1;i<=n;i++)
  {
    if(i>m)
    {
      s=2*(n-i)+1;
	 b=i-m;
    }
    else
    {
	 s=2*i-1;
	 b=m-i;
    }

    for(j=1;j<=b;j++)
	 printf(" ");
    for(j=1;j<=s;j++)
    {
     if ((j==1) || (j==s))
	 printf("*");
     else
	 printf(" ");
    }
    printf("\n");
  }
  return(0);
}

/*
PLEASE ENTER THE NO. OF LAYERS: 5
 
   *
 *   *
*     *
 *   *
   *

*/
