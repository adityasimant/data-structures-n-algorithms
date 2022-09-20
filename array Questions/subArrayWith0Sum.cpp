
// Print all subarrays with 0 sum

#include<iostream>
using namespace std;



int main(){

    int arr[] = { 4, 2, -3, -1, 0, 4};
    

    int size = sizeof(arr)/4 ;


    // outer loop
    for(int i=0; i<size;i++){

        // inner loop
        for (int j = 0; j < size; j++)
        {   
            if(arr[i]+arr[j]== 0){

                cout<<"{"<<arr[i]<<","<<arr[j]<<"}"<<endl;
            }
            for(int k=0; k<size; k++){


            // checking addition and printing
            if(arr[i]+arr[j]+arr[k] == 0){

                cout<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"}"<<endl;
            }

            }
        }
        


    }

    return 0;
}