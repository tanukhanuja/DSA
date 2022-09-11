#include<iostream>
using namespace std;

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
    }
}

int main()
{
    int arr[]={7,4,5,2,6,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,size);
    for(int i=0; i<size; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;

}