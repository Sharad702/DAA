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
        int key,c=1;
        cin>>key;
        for(int j=0;j<size;j++)
        {
           if(array[j]==key)
           {
            cout<<"Present at "<<c<<"\n";
            break;
           }
           else
           c++;
       }
       if(c>size)
       {
        cout<<"Not Present "<<size<<"\n";
       }
    }
}