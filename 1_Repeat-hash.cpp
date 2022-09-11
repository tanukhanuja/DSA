#include<iostream>
#include<unordered_set>
using namespace std;

int duplicate(int arr[], int size)
{
    unordered_set<int> s;
    for(int i=0; i<size; i++)
    if(s.find(arr[i])!=s.end())
        return arr[i];
    else
        s.insert(arr[i]);
        return -1; 
}

int main()
{
    int arr[]={2,1,3,4,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = duplicate(arr, size);
    if(num==-1)
    {
        cout << "No repeating number";
    }
    else
    {
        cout << num << " is repeating";
    }
    return 0;
}