#include <iostream>

using namespace std;
int Linear_search(int arr[],int x);
int main()
{
    int arr[10],x,flag;
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<10;i++)
        cin>>arr[i];
    cout<<"Enter the element you want to search :";
    cin>>x;
    flag= Linear_search(arr,x);
    if(flag==0)
        cout<<"\nElement does not exist in the array";
    else
        cout<<"\nElement exists at index "<<flag;
    return 0;
}
int Linear_search(int arr[],int x){
    int flag=-1;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==x)
            flag=i;

    }
    return flag;
    }

