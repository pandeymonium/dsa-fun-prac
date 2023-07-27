#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int a[], int n)
{
	int large=-1;
	for(int i=0;i<n;i++)
	{
		large = max(large,a[i]);
	}
	
	vector <int> fq(large+1,0);
	
	for(int i=0;i<n;i++)
	{
		fq[a[i]]++;
	}
	
	int j=0;
	for(int i=0;i<=large;i++)
	{
		while(fq[i]>0)
		{
			a[j] = i;
			fq[i]--;
			j++;
		}
	}
}

int main()
{
	int arr[] = {12,13,5,6,7,8,1,2,4,4,2,3,11};
	int s = sizeof(arr)/sizeof(int);
	counting_sort(arr,s);
	for(auto x: arr)
	{
		cout<<x<<" ";
	}
	return 0;
}
