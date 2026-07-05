#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of emoployees";
    cin>>n;

    int arr[n];
    cout<<"enter the employee IDs";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }



    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                swap(arr[j],arr[j+1]);
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The sorted employee IDs are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}