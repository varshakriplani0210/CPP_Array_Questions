//First we will sort it without a temp variable and then we will fetch the second last element
#include <iostream>
#include <climits>
using namespace std;
#define MAX 100
int main()
{
    int arr[MAX];
    int n;
     int secondEle,firstEle;
    cout<<"enter the number of elements of an array";
    cin>>n;
    //to accept array elements
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    //print
    for(int i=0;i<n;++i){
        cout<<"The array elements are"<<endl;
        cout<<arr[i]<<endl;
    }
    //sort
    for(int i=0;i<n;++i){
     secondEle=firstEle=INT_MIN;
     cout<<secondEle;
        if(arr[i]>firstEle){
            secondEle=firstEle;
            firstEle=arr[i];
        }
       print the sorted array
    for(int i=0;i<n;++i){
        cout<<"The sorted aray are";
        cout<<arr[i]<<endl;
    }
    cout<<"The second largest array is "<<arr[n-2];
}
