#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
    for(int i=0; i<size;i++)
    {
        for(int j=i; j<size; j++)
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
    int arr[]={5,1,4,2,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}