#include<stdio.h>
int main()
{
int binom,p,q,r,x;
	binom=1;
	q=0;

	printf("Enter the no rows:\n");
	scanf("%d",&p);
	printf("Pascal triangale is:\n");
	while(q<p)
	{
	   for(r=40-3*q;r>0;--r)
	   	 printf(" ");
	   for(x=0;x<=q;x++)
	   {
		 if((x==0)||(q==0))
			  binom=1;
	  	 else
			  binom=(binom*(q-x+1)/x);
		 printf("%6d",binom);
	  }
	  printf("\n");
	  ++q;
	}
	return(0);
}

/*
Enter the no rows: 5
Pascal triangale is:

    1
   1 1
  1 2 1     
 1 3 3 1
1 4 6 4 1

*/
