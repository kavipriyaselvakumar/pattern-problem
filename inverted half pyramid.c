#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	int len=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=len;j++)
		{
			printf("*");
			
		}
		len--;
		printf("\n");
	}
}
