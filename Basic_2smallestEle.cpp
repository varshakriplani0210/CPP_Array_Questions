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
    secondEle=firstEle=INT_MAX;
    for(int i=0;i<n;++i){
        if(arr[i]<firstEle){
            secondEle=firstEle;
            firstEle=arr[i];
        }
        else if(arr[i]<secondEle){
            secondEle=arr[i];
        }
    }
  cout<<"The 2nd smallest element is "<<secondEle;
}
