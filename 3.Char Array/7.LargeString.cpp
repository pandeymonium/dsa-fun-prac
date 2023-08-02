#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int a;
	cin>>a;
	
	cin.get();
	
	char sent[1000];
	char large[1000];
	
	int large_len =0;
	
	while(a--)
	{
		cin.getline(sent,1000);
		
		int len = strlen(sent);
		
		if(len> large_len)
		{
			large_len = len;
			strcpy(large,sent);
		}
	}
	cout<<large<<"....\n  is the largest String with size "<<large_len<<endl;
	return 0;
}
