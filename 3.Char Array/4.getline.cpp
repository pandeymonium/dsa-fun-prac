#include <iostream>
using namespace std;

int main()
{
	char arr[1000];
	cout<<"Enter something:";
	cin.getline(arr,1000,'.');
	cout<<arr<<endl;
	return 0;
}
