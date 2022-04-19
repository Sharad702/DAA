#include<iostream>

using namespace std;

void merge_sort(int [],int [],int,int);
void merge(int [],int [],int,int,int);
bool has_duplicate(int [],int);

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
        int array[size],temp[size];
        cout<<"Enter the array elements : ";
        for(int i=0;i<size;i++)
        {
            cin>>array[i];
        }
        merge_sort(array,temp,0,size-1);
        has_duplicate(array,size) ? cout<<"Yes\n" : cout<<"No\n";
    }
}

void merge_sort(int array[],int temp[],int lb,int ub)
{
    int mid=0;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
    merge_sort(array,temp,lb,mid);
    merge_sort(array,temp,mid+1,ub);
    merge(array,temp,lb,mid,ub);
    }    
}   

void merge(int array[],int temp[],int lb,int mid,int ub)
{
    int k=lb,i=0,c=lb,LE=mid;
    while(lb<=LE && mid+1<=ub)
    {
        if(array[lb]<array[mid+1])
        {
            temp[k]=array[lb];
            lb++;
            k++;
        }
        else
        {
            temp[k]=array[mid+1];
            k++;
            mid++;
        }
    } 
    while(lb<=LE)
    {
        temp[k]=array[lb];
        k++;
        lb++;
    }
    while(mid+1<=ub)
    {
        temp[k]=array[mid+1];
        k++;
        mid++;
    }
    for(int i=c;i<=ub;i++)
    {
        array[i]=temp[i];
    }
}

bool has_duplicate(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(array[i]==array[i+1])
        return true;
    }
    return false;
}