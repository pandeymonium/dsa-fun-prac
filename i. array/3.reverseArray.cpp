#include <iostream>
using namespace std;

void reverseA(int ape[],int n)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		swap(ape[start],ape[end]);
		start +=1;
		end -=1;
	}
}

int main()
{
	int ape[]={10,20,30,40,50,60,70,80,90,100};
	int ap;
	cout<<"Type 0 to execute"<<endl;
	cin>>ap;
	int n= sizeof(ape)/sizeof(int);
	cout<<"Array :";
	for(int i=ap;i<n;i++)
	{
		cout<<"\n"<<ape[i];
	}
	cout<<endl;
	cout<<endl<<"reversed array:";
	reverseA(ape,n);
	for(int i=ap;i<n;i++)
	{
		cout<<endl<<ape[i];
	}
	return 0;
}
