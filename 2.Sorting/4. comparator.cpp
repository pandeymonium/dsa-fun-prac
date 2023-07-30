#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b; //descending
}

int main()
{
	int a[]={11,7,8,9,4,5,6,10,2};
	int n =sizeof(a)/sizeof(int);
	sort(a,a+n, compare);
	for(int x:a)
	{
		cout<<x<<" ";
	}
	return 0;
}
