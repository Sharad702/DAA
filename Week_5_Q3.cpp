#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int m,n,total,k=0,x;
    cout<<"Enter the size of first array : ";
    cin>>m;
    int a[m];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<m;i++) 
    {
      cin>>a[i];
    }
    cout<<"Enter the size of second array : ";
    cin>>n;
    int b[n],c[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++) 
    {
      cin>>b[i];
    }
    sort(a,a+m);
    sort(b,b+n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                total=0;
                for(x=0;x<k;x++)
                    if(a[i]==c[x])
                     total++;
                if(total==0)
                {
                    c[k]=a[i];
                    k++;
                }
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}