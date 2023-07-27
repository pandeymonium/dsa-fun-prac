#include <iostream>
using namespace std;

int arrsum(int ape[], int n)
{
	int larg=0;
	int sml=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int k=i;k<=j;k++)
			{
				sum+= ape[k];
			}
			larg = max(larg,sum);
			//sml = min(sml,sum);
		}
	}
	return larg;
	//return sml;

}

int main()
{
	int ape[]={-2,3,8,-1,5,-12,6,1,3};
	int n=sizeof(ape)/sizeof(int);
	cout<<arrsum(ape,n);
	return 0;
}
