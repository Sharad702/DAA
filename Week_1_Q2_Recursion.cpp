#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int size;
        cin>>size;
        int array[size];
        for(int j=0;j<size;j++)
        {
            cin>>array[j];
        }
        int key,flag=0,l=0,r=size-1;
        cin>>key;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(array[mid]==key)
            {
                flag=1;
                cout<<mid<<"\n";
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
        {
            cout<<"Not Found"<<"\n";
        }
    }
}
