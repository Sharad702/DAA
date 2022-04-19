#include<iostream>

using namespace std;

void insertion_sort(int [],int);

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
        insertion_sort(array,size);
        t--;
    }
}

void insertion_sort(int array[],int size)
{
     int i,j,t=0;
     int comparison=0,swap=0;
    for(i=1;i<size;i++)
    {
        t=array[i];
        j=i-1;
        while(j>=0 && t<array[j])
        {
          array[j+1]=array[j];
          j--;
            comparison++;
            swap++;
        }
        array[j+1]=t;
        comparison++;
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i];
    }
    cout<<"\nComparisons = "<<comparison;
    cout<<"\nShifts = "<<swap<<"\n";
}