#include <iostream>
using namespace std;

void selection_sort(int ape[], int n)
{
	for(int pos=0;pos<=n-2;pos++)
	{
		int current = ape[pos];
		int min = pos;
		for(int j=pos;j<n;j++)
		{
			if(ape[j]<ape[min])
			{
				min =j;
			}
		}
		swap(ape[min],ape[pos]);
	}
}

int main()
{
	int ape[]= {11,7,8,9,4,5,6,10,2};
	int n = sizeof(ape)/sizeof(int);
	
	selection_sort(ape,n);
	for(int i=0;i<n;i++)
	{
		cout<<ape[i]<<" ";
	}
	return 0;
}
