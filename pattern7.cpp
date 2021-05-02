#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,l=0,count=1;
	for(i=0;i<2*n-1;i++)
	{
		count=1;
		for(j=0;j<2*n-1;j++)
		{
			if(j<=2*l)
			{
				if(j%2!=0)
				{
					cout<<"*";
				}
				else{
					cout<<count;
					count++;
				}
			}
		}
		cout<<endl;
		if(i<n-1)
		{
			l=l+1;
		}
		else{
			l=l-1;
		}
	}
}
