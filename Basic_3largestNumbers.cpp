#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n;
  cout<<"enter the number of elements";
  cin>>n;
  if(n<3){
      cout<<"Invalid Input";
  }
  int arr[n];
  for(int i=0;i<n;++i){
      cin>>arr[i];
  }
  int first,second,third=INT_MIN;
  for(int i=0;i<n;++i){
      if(arr[i]>first){
          third=second;
          second=first;
          first=arr[i];
      }
      else if(arr[i]>second){
          third=second;
          second=arr[i];
      }
      else if(arr[i]>third){
          third=arr[i];
      }
  }
  cout<<"The 3 largest elements are "<<first<<endl<<second<<third;
}
