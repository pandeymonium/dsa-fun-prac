#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char ape[100] ="messi";
	char apy[100];
	
	//Strlen() for String Length
	cout<<strlen(ape)<<endl;
	
	//copy... strcpy(destination, source);
	strcpy(apy,ape);
	cout<<apy<<endl;
	
	cout<<strcmp(ape,apy)<<endl;
	
	char a[]="www.";
	char b[]="suarez.com";
	
	//strcat is for concatination
	cout<<strcat(a,b)<<endl;
	
	// String copy
	strcpy(apy,strcat(a,b));
	cout<<apy<<endl;
	
	
	//compare 
	cout<<"Compare ape and apy: "<<strcmp(apy,ape)<<endl;
	
	char lol[100]= "wonderful";
	char lo[100]="super";
	
	cout<<strcmp(lol,lo)<<endl;
	return 0;
}
