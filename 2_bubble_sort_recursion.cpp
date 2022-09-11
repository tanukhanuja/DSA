#include<iostream>
using namespace std;


void bubbleSort_recursion(int arr[], int size)
{
    
    for (int i=0;i<(size-1);i++)
    {
        if(arr[i]>arr[i+1])
        {
            int x=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=x;
        }
    }
    if(size>1)
    {
    bubbleSort_recursion(arr, size-1);
    }
}

int main()
{
    int arr[]={5,8,4,2,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleSort_recursion(arr,size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}