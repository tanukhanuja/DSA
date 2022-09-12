#include<iostream>
using namespace std;

//In bubble sort we compare adjacent values
//can be done using nested loop, recursion etc

//define bubb;e sorting function with nested loop
void bubble_sort(int arr[], int size)
{
    int s = size;
    for(int i=0; i<size;i++)
    {
        for(int j=0; j<s-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
            int x=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=x;
            }
            //print array after each pass
        cout << "array after pass " << i+1 << ":  ";
        for(int k=0; k<size; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
        }
        
        s--;
    }
}

int main()
{
    int arr[]={5,1,4,2,8,1,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
   
    //print given array
    cout << "unsorted array:  ";
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    bubble_sort(arr,size);

    //print sorted array
    cout << "sorted array is:  ";
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}
