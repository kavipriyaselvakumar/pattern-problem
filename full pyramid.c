#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	int len=n;
	for(i=1;i<=n;++i,k=0)
	{
		for(j=1;j<len;++j)
		{
			printf(" ");
			
		}
	    for(k=1;k<=i;k++)
	    {
	    	printf("*");
	    	printf(" ");
		}
		len--;
		printf("\n");
	}
}
