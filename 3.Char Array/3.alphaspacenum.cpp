#include <iostream>
using namespace std;

int main()
{
	char ape;
	ape = cin.get();
	int alpha=0;
	int num =0;
	int space =0;
	
	while(ape != '\n')
	{
		
		if(ape >='0' and ape<='9')
		{
			num++;
		}
		else if((ape>='a' and ape<='z') or (ape>='A' and ape<='Z'))
		{
			alpha++;
		}
		else if(ape==' ' or ape == '\t')
		{
			space++;
		}
		cout<<ape;
		ape = cin.get();
	}
	cout<<endl;
	cout<<"Space: "<<space<<"  "<<"Alphabets: "<<alpha<<" "<<"Number: "<<num;
	return 0;
}
