#include<iostream>
using namespace std;

//In selection sort minimum value is sorted first
//compare 1st value with 2nd, if needed swap
//compare 1st value with 3rd, if needed swap
//and so on till size-1
//therefore two loops are nested
//i for main reference index with which other index values are compared i.e. j index

//define sorting function
void selection_sort(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if (arr[j]<arr[i])
            {
                int x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
        }
        
        //print array after each pass to understand how selection sort work
        cout << "array after pass "<< i+1 << endl;
        for(int k=0; k<size; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

//driver's code
int main()
{
    int arr[]={7,4,5,2,6,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    //print given array
    cout << "unsorted array: ";
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selection_sort(arr,size);
   
   //print sorted array
    cout << "Final sorted array is: ";
    for(int i=0; i<size; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;

}
