#include <iostream>
using namespace std;

int binaryS(int ape[],int n, int key)
{
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		int mid= (e+s)/2;
		if(ape[mid]==key)
		{
			return mid;
		}
		else if(ape[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		
	}
	return -99;
}

int main()
{
	int ape[]={1,4,5,7,8,9,36,39,45,85};
	int n = sizeof(ape)/sizeof(int);
	
	int key;
	cout<<"Enter the number for searching:";
	cin>>key;
	int index= binaryS(ape,n,key);
	{
		if(index!=-99)
		{
			cout<<"index of "<<key<<":"<<index;
		}
		else
		cout<<key<<" is not found";
		
	}
	return 0;
}
