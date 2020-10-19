#include<stdio.h>
int main()
{
	int n,i,j,k;

	printf("\n\n\t\t please enter the layer no.....");
	scanf("%d",&n);
     for(i=1;i<=n;i++)
	{
       if(i==1||i==n)
	  {
	    for(k=1;k<=n;k++)
	       printf(" %d",k);
	    printf("\n");
	  }
	  else
	  {
	    for(j=1;j<=2*(n-i);j++)
	       printf(" ");
	    printf(" %d\n",n-i+1);
	  }
	}
	return(0);
}

/*
Output:

please enter the layer no.....5

1 2 3 4 5
      4
    3
  2
1 2 3 4 5

*/
