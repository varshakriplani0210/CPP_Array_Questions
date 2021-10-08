// Write a C++ program to find all elements in array of integers which have at-least two greater elements
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
    secondEle=firstEle=INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>firstEle){
            secondEle=firstEle;
            firstEle=arr[i];
        }
        else if(arr[i]>secondEle){
            secondEle=arr[i];
        }
    }
  for(int i=0;i<n;++i){
      if(arr[i]<secondEle){
          cout<<".................."<<endl;
          cout<<arr[i]<<endl;
      }
  }
}

//time complexity O(n)
