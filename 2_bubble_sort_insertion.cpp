#include<iostream>
using namespace std;


void bubblesort_insertion(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for (int j=i; j>=0 && j<size-1; j--)
        {
            if(arr[j]>arr[j+1])
            {
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
            //print after each pass
        cout << "Pass" << i+1 << ":" ;
        for(int k=0; k<size; k++)
        {
            cout << arr[k] << " ";
        }
        cout <<endl;
        }
    }
}

int main()
{
    int arr[]= {13, 11, 12, 8, 9, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted array: ";
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubblesort_insertion(arr, size);
    cout << "Final sorted array is: ";
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}