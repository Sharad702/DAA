#include<iostream>

using namespace std;

void search_key(int [],int,int,int);

int main()
{
    int t;
    cout<<"Enter the no.of test cases : ";
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
        cout<<"Enter the key elements : ";
        cin>>key;
        search_key(array,0,size-1,key);
        t--;
    }
}

void search_key(int array[],int l,int r,int key)
{
    int n=r,c=0;
    int mid=0;
    int flag=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(array[mid]==key)
        {
            flag=1;
            break;
        }
        if(key<array[mid])
        {
           r=mid-1;
        }
        else
            l=mid+1;
    }
    if(flag==0)
    cout<<"Not found"<<"\n";
    else
    {
      int i=mid;
      while(i>0 && array[i]==key)
      {
        c++;
        i--;
      }
      i=mid+1;
      while(i<=n-1 && array[i]==key)
      {
        c++;
        i++;
      }
     cout<<key<<" - "<<c<<"\n";
    }
}