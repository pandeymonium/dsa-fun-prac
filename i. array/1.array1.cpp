#include <iostream>
using  namespace std;

int main()
{
	int ape[100];
	int n,i;
	cout<<"Enter the number of studnets in class: ";
	cin>>n;
	
	cout<<endl;
	cout<<"Enter their marks:";
	for( i=0;i<n;i++)
	{
		cin>>ape[i];
	}
	cout<<endl;
	
	cout<<"Mark of the students are:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<"."<<ape[i]<<endl;
	}
	
	return 0;
}
