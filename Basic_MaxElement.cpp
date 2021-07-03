#include <iostream>

using namespace std;

//when the elements are already given in an array

int main()
{
    int arr[5]={500,400,200,7000,100};
    for(int i=0;i<5;i++)
    {
        cout<<"The arry elements are "<<arr[i]<<endl;
        
        
    }
    for(int i=0;i<5;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
            
        }
    }
    cout<<"the largest element is "<<arr[0]<<endl;
    
}
