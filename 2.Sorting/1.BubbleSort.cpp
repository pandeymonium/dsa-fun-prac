#include <iostream>
using namespace std;

int Bub(int ape[], int n)
{
	for(int times=1;times<=n-1;times++)
	{
		for(int j=0;j<=n- times -1;j++)
		{
			if(ape[j]>ape[j+1])
			{
				swap(ape[j],ape[j+1]);
			}
		}
	}
}
int Bub1(int ape[], int n)
{
	for(int times=1;times<=n-1;times++)
	{
		for(int j=0;j<=n- times -1;j++)
		{
			if(ape[j]<ape[j+1])
			{
				swap(ape[j],ape[j+1]);
			}
		}
	}
}
int main()
{
	int ape[]= {7,3,1,8,5,2};
	int n =sizeof(ape)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		cout<<ape[i]<<" ";
	}
	cout<<endl;	
	Bub(ape,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<ape[i]<<" ";
	}
	cout<<endl;
	Bub1(ape,n);
		for(int i=0;i<n;i++)
	{
		cout<<ape[i]<<" ";
	}
	cout<<endl;
	Bub(ape,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<ape[i]<<" ";
	}
	cout<<endl;
	return 0;
}
