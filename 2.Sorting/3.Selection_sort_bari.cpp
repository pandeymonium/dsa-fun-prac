#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
	int min;
	for(int pos=0;pos<=n-2;pos++)
	{
		for(int j=min = pos; j<n;j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
		}
		swap(a[min],a[pos]);
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
