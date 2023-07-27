#include <iostream>
using namespace std;

int kadane(int ape[], int n)
{
	int c_sum=0;
	int large=0;
	for(int i=0;i<n;i++)  // time complexity is Order of N O(N), linear
	{
		c_sum= c_sum + ape[i];
		if(c_sum<0)
		{
			c_sum=0;
		}
		large = max(large,c_sum);
	}
	return large;
}
int main()
{
	int ape[]={2,3,5,-7,8,4,3,-2,10};
	int n = sizeof(ape)/sizeof(int);
	cout<<kadane(ape,n);
	return 0;
}
