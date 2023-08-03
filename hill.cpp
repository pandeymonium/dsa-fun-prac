#include <iostream>
using namespace std;

void getKeyMatrix(string key, int keyMatrix[][3] )
{
	int k=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			keyMatrix[i][j]= (key[k])%65;
		}
	}
}

void 
