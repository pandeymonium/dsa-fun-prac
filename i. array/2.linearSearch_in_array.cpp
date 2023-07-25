#include <iostream>
using namespace std;

int linearS(int ape[],int n, int key)
{
	for(int i=0;i<n;i++)
	{
		if(ape[i]==key)
		{
			return i;
		}
	}
	return -99;
	
}

int main()
{
	int ape[]={1,4,5,7,8,9,45,36,85,39};
	int n= sizeof(ape)/sizeof(int); 
	cout<<"N is:"<<n<<endl;
	cout<<"Size of ape is "<<sizeof(ape)<<" and size of int "<<sizeof(int)<<endl;
	int key;
	cout<<"Enter the number you were searching: ";
	cin>>key;
	int index=  linearS(ape,n,key);
	{
		if(index!=-99)
		{
			cout<<"The index of the key "<<key<<":"<<index;
		}
		else
		{
			cout<<key<<" is not found";
		}
	}
	return 0;
}
