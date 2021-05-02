#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,j,sum=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    if(i%2!=0)
        {
            sum=sum+i;
        }
        else{
            if(i!=0)
                sum=sum+(i+1);
        }
		for(j=0;j<=2*i;j++)
		{
		    if(i%2!=0)
            {
                if(j%2!=0)
                {
                    cout<<"*";
                }
                else{
                    cout<<sum;
                    sum--;
                }
            }
            else{
			if(j%2!=0)
			{
				cout<<"*";
			}
			else{
				cout<<sum;
                sum++;
			}
            }
	}
	cout<<endl;
	}
}
