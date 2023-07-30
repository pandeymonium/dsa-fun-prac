#include <iostream>
#include <vector>
using namespace std;

int counting_sort(int arr[], int n)
{
	int large =-1;
	for(int i=0;i<n;i++)
	{
		large = max(large,arr[i]);
	}
	//Dynamic array fq , to store frequncy largest number of 1st array will be its index
	vector <int> fq(large+1,0);
	//update the fq array
	
	for(int i=0;i<n;i++)
	{
		fq[arr[i]]++;
	}
	//putting fq array back into array
	
	int j=0;
	for( int i=0;i<=large;i++)
	{
		while(fq[i]>0)
		{
			arr[j] = i;
			fq[i]--;
			j++;
		}
	}
	return 0;
}
int main()
{
	int ape[]= {11,7,8,9,4,5,6,10,2};
	int n = sizeof(ape)/sizeof(int);
	
	counting_sort(ape,n);
	for(int i=0;i<n;i++)
	{
		cout<<ape[i]<<" ";
	}
	return 0;
}
