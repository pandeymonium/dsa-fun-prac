#include <iostream>
#include <string>
using namespace std;

string strcompress(string str)
{
	int n = str.length();
	string output;
	for(int i=0;i<n;i++)
	{
		int count =1;
		
		while(i<n-1 and str[i+1]== str[i])
		{
			count++;
			i++;
		}
		output+= str[i];
		output+= to_string(count)
		;
	}
	if(str.length()< output.length())
	{
		return str;
	}
	return output;
}

int main()
{
	string str1 ="aaaabbbcccdddee";
	string str2 ="aabbc";
	
	cout<<"aaaabbbcccdddee into : "<<strcompress(str1)<<endl;
	cout<<"aabbc into : "<<strcompress(str2)<<endl;
	return 0;
}
