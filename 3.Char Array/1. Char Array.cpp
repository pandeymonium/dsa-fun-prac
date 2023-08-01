#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[] ={'a','b','k','l','\0'};
	cout<<"Length of a[] :"<<strlen(a)<<endl;
	cout<<"Size of a[] :"<<sizeof(a)<<endl;
	
	cout<<a<<endl;
	char b[]="apoorv";
	cout<<"Length of b[] :"<<strlen(b)<<endl;
	cout<<"Size of b[] :"<<sizeof(b)<<endl;
	cout<<b<<endl;
	
	char c[100];
	cin>>c;
	cout<<"Output: "<<c<<endl;
	return 0;
}
