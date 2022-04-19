#include<iostream>

using namespace std;

void selection_sort(int [],int);

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
      selection_sort(array,size);
      t--;
  }
}

void selection_sort(int array[],int size)
{
     int i,j,pos=0,min=0;
     int swap=0,comparison=0;
    for(int i=0;i<size-1;i++)
    {
     min=array[i];
     pos=i;
     for(j=i+1;j<size;j++)
     {
       if(array[j]<min)
       {
           min=array[j];
           pos=j;
       }
      comparison++;
     }
      array[pos]=array[i];
      array[i]=min;
      swap++;
    }
    for(int i=0;i<size;i++)
    {
      cout<<array[i]<<" ";
    }
    cout<<"\nComparisons = "<<comparison;
    cout<<"\nSwaps = "<<swap<<"\n";
    
  }
