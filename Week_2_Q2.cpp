#include<iostream>
using namespace std;

void array_sum(int [],int);

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
        cout<<"Enter the array  elements : ";
        for(int i=0;i<size;i++)
        {
            cin>>array[i];
        }
        array_sum(array,size);
        t--;
    }
}

void array_sum(int array[],int size)
{
    int c=0;
    for(int i=0;i<size-2;i++)
    {
        for(int j=i+1;j<size-1;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(array[i]+array[j]==array[k])
                {
                    c++;
                    cout<<i+1<<","<<j+1<<","<<k+1<<"\n";
                }
            }
        }
    }
    if(c==0)
    {
        cout<<"No Sequence Found"<<"\n";
    }
}