#include<iostream>
using namespace std;

int duplicate(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,3,6,5};
    //n is size of array
    int n=sizeof(arr)/sizeof(arr[0]);
    int num = duplicate(arr, n);
    cout << "Repeating number is: " << num;
    return 0;
}