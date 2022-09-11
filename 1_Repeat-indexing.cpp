#include<iostream>
#include<Algorithm>
using namespace std;

int duplicate(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
    int x= arr[abs (arr[i])];
        while(x<0)
        {
          return abs(x); 
          break; //means its repeating
        }
    arr[abs(arr[i])]=- abs(arr[i]);
    }
    return -1;
}

int main()
{
    int arr[]={0,1,2,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = duplicate(arr, size);
    if(x==-1)
    {
        cout << "No repeats";
    }
    else{
        cout << x;
    }
    return 0;
}