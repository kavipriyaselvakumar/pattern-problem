#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	int len=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if(j==len)
				{
				printf("*");
				int k=len;
				    x:
					if(k!=n){
						printf("*");
						k++;
						goto x;
					}
					else{
						break;
					}
		    	}
		    	else{
		    	printf(" ");
				}
		}
		len--;
		printf("\n");
	}
}
