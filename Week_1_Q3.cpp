#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int key,ctr=1,flag=0,t;
    cout<<"Enter the number of test cases : ";
    cin>>t;
    while(t!=0)
    {
        int size=0;
        cout<<"Enter the size of array : ";
        cin>>size;
        int array[size];
        for(int i=0;i<size;i++)
        {
            cin>>array[i];
        }
        int i=0;
        cout<<"Enter the key : ";
        cin>>key;
        if(array[0]==key)
            cout<<"Present "<<ctr<<"\n";
        else
        {
            while(1)
            {
                if(array[(int)pow(2, i)]>key)
                {
                    for (int j=pow(2, i);j<min((int)pow(2, i + 1),size);j++)
                    {
                        ctr++;
                        if (array[j]==key) flag=1;
                    }
                    if(flag)
                        cout<<"Present "<<ctr<<"\n";
                    else
                        cout<<"Not Present "<<ctr<<"\n";
                    break;
                }
                ctr++;
                i++;
            }
        }
        t--;
    }
}
