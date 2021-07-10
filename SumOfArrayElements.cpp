#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the number of array elemnts";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    //Sum Of array elements
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The sum is "<<sum<<"\n";
}
