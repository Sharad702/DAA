#include<iostream>

using namespace std;

void array_difference(int [],int,int);

int main()
{
    int t=0;
    cout<<"Enter the number of test cases :";
    cin>>t;
    while(t!=0)
    {
        int size=0;
        cout<<"Enter the size of array : ";
        cin>>size;
        int array[size];
        cout<<"Enter the array elements : ";
        for(int i=0;i<size;i++)
        {
        cin>>array[i];
        }
        int key=0;
        cout<<"Enter the key element : ";
        cin>>key;
        array_difference(array,size,key);
        t--;
    }
}

void array_difference(int array[],int size,int key)
{
    int c=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((array[i]-array[j]==key)||(array[j]-array[i]==key))
            c++;
        }
    }
cout<<c<<"\n";
}