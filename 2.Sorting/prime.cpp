#include <iostream>
using namespace std;

int primex(int n)
{
	for(int i=2;i=<n/2;i++)
	{
		if(n%i==0)
		{
			return -1;
		}
	}
	
	return -2;
}
int main()
{
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	int num = primex(n);
	(num==-2)
	? cout<<n<<" is prime"
	: cout<<n<<" is not prime";
	return 0;
}
