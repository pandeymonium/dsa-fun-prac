#include <iostream>
using namespace std;

int main()
{
	char temp = cin.get();
	int len =0;
	
	while( temp != '\n') // we can also use '#'
	{
		len++;
		
		cout<<temp;
		//update temp
		temp = cin.get();
		
	}
	cout<<endl<<"length:"<<len;
	return 0;
}
