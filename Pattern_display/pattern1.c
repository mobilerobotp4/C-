#include<stdio.h>


int main()
{
	int j,k=1,t,n;
	printf ("ENTER THE LINE NUMBER YOU WANT TO SEE :");
	scanf ("%d",&n);
	for (t=1;t<=n ;t++ )
	{
		for (j=1 ;j <= t ; j++)
		{
			printf (" %d ",k);
			k++;
		}
		printf("\n");

	}
	return(0);
}

/*
Output:
ENTER THE LINE NUMBER YOU WANT TO SEE : 5

1
2   3
4   5   6
7   8   9   10
11  12  13  14  15 

*/
