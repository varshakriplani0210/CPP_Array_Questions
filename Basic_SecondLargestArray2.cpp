//Approach
//1.find the largest element
//2.find the second largest excluding the largest element

#include <iostream>
#include <climits>
using namespace std;

int main()
{
   int n;
   cin>>n;
   if(n<2){
       cout<<"invalid input";
       return 0;
   }
   int arr[n];
   //accept array elements
   for(int i=0;i<n;++i){
       cin>>arr[i];
   }
   int largest=1,secondLargest=-1;
   //find the largest element in an array
   for(int i=1;i<n;++i){
       if(arr[i]>arr[largest]){
           largest=i;
       }
   }
       for(int i=0;i<4;++i){
       if(arr[i]!=arr[largest]){
           if(secondLargest==-1){
               secondLargest=i;
           }
           else if(arr[i]>arr[secondLargest]){
               secondLargest=i;
           }
       }
       
       
   }
   cout<<"The second largest element is "<<arr[secondLargest];
}
