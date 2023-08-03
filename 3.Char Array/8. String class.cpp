#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	
	int n=4;
	
	vector <string> ape;
	string temp;
	
	while(n--)
	{
		getline(cin,temp);
		ape.push_back(temp);
	}
	for(string x:ape)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	//cout<<temp<<endl;
	//cout<< ape;
}
