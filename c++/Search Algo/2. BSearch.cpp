//Binary_search

#include <iostream>
using namespace std;

int BSearch(int a[], int n, int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    
    return -1;
}
int main()
{
    int a [] = {11,13,17,19,21,25,27,55,77,91};
    int n= sizeof(a)/sizeof(int);
    int key;
    cout<<"Enter:";
    cin>>key;
    int index = BSearch(a,n,key);
    (index!=-1)
    ? cout<<key<<" is present at index "<<index
    : cout<<key<<" is not present";
    
    return 0;
}