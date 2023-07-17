#include <iostream>
using namespace std;

int Linear_search(int a[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    
    return -1;
}

int main()
{
    int a[] = {15,17,27,19,12,9,71,33};
    int n = sizeof(a)/sizeof(int);
    int key;
    cout<<"Find:"<<endl;
    cin>>key;
    
    int index =Linear_search(a,n,key);
    (index !=-1)
    ? cout<<key<<" is present at index "<<index
    : cout<<key<<" is not present";
    return 0;
}