#include<iostream>
using namespace std;


void bubblesort_insertion(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for (int j=i; j>=0; j--)
        {
            if(arr[j]>arr[j+1])
            {
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
}

int main()
{
    int arr[]= {13, 12, 11, 10, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubblesort_insertion(arr, size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}