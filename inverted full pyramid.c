#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;++i,k=0)
	{
		for(j=1;j<=i;++j)
		{
			printf(" ");
			
		}
	    for(k=n;k>=i;k--)
	    {
	    	printf("*");
	    	printf(" ");
		}
		printf("\n");
	}
}
