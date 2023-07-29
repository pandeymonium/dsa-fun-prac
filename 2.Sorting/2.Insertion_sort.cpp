#include <iostream>
using namespace std;

void inser( int ape[], int n)
{
	for(int i=1;i<=n-1;i++) {
		int current = ape[i];
		int prev = i-1;
		while(prev>=0 and ape[prev]> current)
		{
			ape[prev+1] = ape[prev];
			prev = prev -1; 
		}
		ape[prev+1] = current;
	}
	
}

int main()
{
	int ape[]= {11,9,7,4,5,6,3,10};
	int n =sizeof(ape)/sizeof(int);
	
	inser(ape,n);
	
	for(int i=0;i<n;i++)
	{
		cout<< ape[i]<<" ";
	}
	
	return 0;
}
