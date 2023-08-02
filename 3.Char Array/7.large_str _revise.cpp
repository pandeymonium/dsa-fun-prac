#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int c;
	cout<<"Enter the number of Strings:"<<endl;
	cin>>c;
	
	cin.get();
	
	char ape[1000];
	char largest[1000];
	
	int large_len =0;
	
	while(c--)
	{
		cin.getline(ape,1000);
		
		int len =strlen(ape);
		if(len>large_len)
		{
			large_len = len;
			strcpy(largest,ape);
		}
		
	}
	cout<<largest<<endl<<"String Length :"<<large_len;
	return 0;
}
