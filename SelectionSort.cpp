#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,n=5,index,temp,min,a[30];
   
    cout<<"\nEnter the elements\n";
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
 
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
 
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}