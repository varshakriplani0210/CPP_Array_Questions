#include <iostream>

using namespace std;

//when we need to take size from user and print array elements.
int main()
{
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n];
    //To accept array elements 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //To print the array elements
    for(int i=0;i<n;i++)
    {
        cout<<"The Array elements are "<<"  "<<arr[i]<<endl;
    }
    //to check the largest elements
    for(int i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
           
        }
    }
     cout<<"the largest array element is "<<arr[0];
}
