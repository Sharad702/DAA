#include<iostream>
#include<cstring>

using namespace std;

int highest_frequency(int [],int&);

int main()
{
    int total_alphabets=26;
    char alphabets[total_alphabets];
    for(int i = 0; i < total_alphabets; i++) alphabets[i] = char(i + 97);
    int t=0;
    cout<<"Enter the number of test cases : ";
    cin>>t;
    while(t!=0)
    {
        int size=0;
        cout<<"Enter the size of array : ";
        cin>>size;
        char array[size];
        cout<<"Enter the array elements : ";
        for(int i=0;i<size;i++)
        {
            cin>>array[i];
        }
        int count[total_alphabets];
        memset(count,0,sizeof(count));
        for(int i=0;i<size;i++)
        {
            count[alphabets[array[i]-97]-97]++;
        }
        int highest_frequency_occurence=highest_frequency(count,total_alphabets);
        if(count[highest_frequency_occurence]==1)
        cout<<"\nNo Duplicates Found";
        else
        cout<<alphabets[highest_frequency_occurence]<<" - "<<count[highest_frequency_occurence]<<"\n";
        t--;
    }
}

int highest_frequency(int array[],int &size)
{
    int max = array[0], index = 0;
    for (int i=0;i<size;i++) 
    {
        if (max<array[i])
        {
            max=array[i];
            index=i;
        }
    }
    return index;
}
