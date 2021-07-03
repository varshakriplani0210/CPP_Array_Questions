
#include <iostream>

using namespace std;

int main()
{
    //to accept array elements from user
    int n;
    cout<<"enter size of array ";
    cin>>n;
    
    //declare array with size n
    int arr[n];
    
    //To accept array elements
    for(int i=0;i<n;i++)
    {
       cout<<"enter the array elements "<<endl;
        cin>>arr[i];
    }
    
    //too print array elements
    for(int i=0;i<n;i++)
    {
        cout<<"The array elements are "<<arr[i]<<endl;
    }
    
}
