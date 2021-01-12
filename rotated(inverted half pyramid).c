#include<stdio.h>
void main()
{
	int n,i,j,k=1;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	int len=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=len;j++)
		{
			x:
			if(k<=i)
			{
				printf(" ");
				k++;
				goto x;
			}
			printf("*");
			
		}
		len--;
		k=1;
		printf("\n");
	}
}
