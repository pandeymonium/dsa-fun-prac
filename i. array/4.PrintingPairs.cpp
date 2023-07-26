#include <iostream>
using namespace std;

void pairs(int ape[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			cout<<ape[i]<<","<<ape[j]<<endl;
		}
		cout<<endl; 
	}
}

int main()
{
	int ape[]={10,20,30,40,50,80};
	int n =sizeof(ape)/sizeof(int);
	pairs(ape,n);
	return 0;
}
