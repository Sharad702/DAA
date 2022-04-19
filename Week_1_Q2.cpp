#include<iostream>

using namespace std;

int binary_search(int [],int,int,int);

int main()
{
        int n;
        cin>>n;
        int array[n];
        for(int j=0;j<n;j++)
        {
            cin>>array[j];
        }
        int key=0;
        cin>>key;
    int p=binary_search(array,0,n-1,key);
   if(p!=-1) cout<<"Present at "<<p<<"\n";
   else
   cout<<"Not Present"<<"\n";
}

int binary_search(int array[],int l,int r,int key)
{
       if(r>=l)
       { 
           int mid=l+(r-l)/2;
        if(array[mid]==key)
        {
            return mid;
        }
        if(array[mid]<key)
            return binary_search(array,mid+1,r,key);
        return binary_search(array,l,mid-1,key);
        
       }
       
        return -1;
}