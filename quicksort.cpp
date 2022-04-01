#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    int i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
}

void swap(int i,int j, int *arr){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;
    

    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return;
        }
    }
}


int main() {
    int arr[8] = {110, 5, 10,3 ,22, 100, 1, 23};
    quicksort(arr, 0, (sizeof(arr)/sizeof(arr[0]))-1);
    print(arr, (sizeof(arr)/sizeof(arr[0])));
    return 0;
}
