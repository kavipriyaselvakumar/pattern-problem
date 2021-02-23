#include<stdio.h>
void main()
{
	int n,i,j,m,k,m1,k1;
	n=4;
	m=0;
	k=2*n-1;
	m1=n-2;
	k1=n+1;
	for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<2*n;j++)
		{
			if(i<n)
			{
			if(m>=j || k<=j)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
			}
			else{
				if(m1>=j || k1<=j)
					{
						printf("*");
					}
					else{
						printf(" ");
					}
			}
			}
		printf("\n");
		if(i<n)
		{
		m++;
		k--;
	}
	if(i>n)
	{
		m1--;
		k1++;
	}
	}
}
