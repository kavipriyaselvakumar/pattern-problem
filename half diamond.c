#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	k=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
