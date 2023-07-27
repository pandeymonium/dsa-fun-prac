#include <iostream>
using namespace std;

void subarr(int ape[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			//cout<<"("<<ape[i]<<","<<ape[j]<<")"<<endl;
			for(int k=i;k<=j;k++)
			{
				//cout<<ape[k]<<",";
				sum +=ape[k];
				cout<<sum;
			}
			cout<<endl<<"";
		
		}
		cout<<endl<<"";
	}
}
int main()
{
	int ape[]={10,20,30,40,50,60};
	int n=sizeof(ape)/sizeof(int);
	subarr(ape,n);
	return 0;
}
