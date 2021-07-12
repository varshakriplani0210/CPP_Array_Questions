//INSERTING ELEMENT IN ARRAY BY USERS CHOICE

#include <iostream>

using namespace std;

int main()
{
int i=0,j,n;
char choice;
// cout<<"Enter the number of elements to enter";
// cin>>n;
int arr[100];
do{
    cout<<"Enter the "<<i+1<<" element ";
    cin>>arr[i];
    i=i+1;
    cout<<"Do you want to enter again (Y/y)";
    cin>>choice;
    
}while(choice=='Y' || choice=='y');
cout<<"elements are"<<endl;
for(j=0;j<i;j++){
    cout<<arr[j];
}

}
