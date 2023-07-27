 #include <iostream>
using namespace std;

int prefixsum(int ape[],int n)
{
	int pfx[100]={0};
	pfx[0]=ape[0];
	for(int i=0;i<n;i++)
	{
		pfx[i]=pfx[i-1]+ape[i];
	}
	
	int larg =0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int arrsum = i>0 ? pfx[j] - pfx[i-1] : pfx[j];
			larg = max(larg,arrsum);
		}
	}
	return larg;
}
int main()
{
	int ape[]={-2,3,8,-1,5,-12,6,1,3};
	int n=sizeof(ape)/sizeof(int);
	cout<<"Prefix sum: "<<prefixsum(ape,n);
	return 0;
}
