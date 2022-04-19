#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t=0;
    cout<<"Enter the number of test cases : ";
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
        int k=0;
        cout<<"Enter the element ot be found : ";
        cin>>k;    
        sort(array,array+size);
        int i=0,count=0;
        while(count!=k-1)
        {
            if(array[i]!=array[i+1])count++;
            i++;
        }
        cout<<array[i]<<"\n";
    }
}