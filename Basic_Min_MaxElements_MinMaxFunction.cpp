#include <iostream>
#include <climits>

using namespace std;

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
    int maxno=INT_MIN;
    int minno=INT_MAX;
    cout<<maxno<<endl;
    for(int i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<"max num "<<maxno<<endl;
    cout<<"MIN no "<<minno;
}
