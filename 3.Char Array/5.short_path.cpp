#include <iostream>
using namespace std;

int main()
{
	char sol[1000];
	cout<<"Enter Path: ";
	cin.getline(sol,1000);
	
	int x=0;
	int y=0;

	for(int i=0;sol[i] != '\0';i++)
	{
		switch(sol[i]){
			case 'N' :
				y++;
				break;
			case 'S' :
				y--;
				break;
			case 'E' :
				x++;
				break;
			case 'W' :
				x--;
				break;
		}			 
	}
	cout<<"(x,y) : "<<"("<<x<<","<<y<<")"<<endl;
	if(x>0 and y>0)
	{
		cout<<"I Quadarant"<<endl;
		while(y--)
		{
			cout<<"N";
		}
		while(x--)
		{
			cout<<"E";
		}
	}
	
	else if(x<0 and y<0)
	{
		cout<<"III Quadarant"<<endl;
		while(y++)
		{
			cout<<"S";
		}
		while(x++)
		{
			cout<<"W";
		}
	}
	
	else if(x<0 and y>0)
	{
		cout<<"II Quadarant"<<endl;
		while(y--)
		{
			cout<<"N";
		}
		while(x++)
		{
			cout<<"W";
		}
	}
	
	
	else if(x>0 and y<0)
	{
		cout<<"IV Quadarant"<<endl;
		while(y++)
		{
			cout<<"S";
		}
		while(x--)
		{
			cout<<"E";
		}
	}
	return 0;
}
