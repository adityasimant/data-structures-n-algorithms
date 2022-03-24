#include<iostream>
using namespace std;

int main(){

    int arr[]={
        1,2,3,4,5,6,7,8,9,12,13,14,16,18
    };
    int key,e=-1;
    cout<<"enter the key ";
    cin>>key;
    bool ans=false;
    int start =1,end = 18,mid;

    while(start<=end)
    {
        mid = (start+end)/2;
        if (key == arr[mid] )
        {
            e = mid;
            break;
        }
        else if (key > arr[mid] )
        {
            start = mid+1;
        }
        else if (key < arr[mid])
        {
          end = mid-1;
        }
        
    }
    if (e>0)
    {
        cout<<e;
    }
    else{
        cout<<"not found";
    }
    

    return 0;
}