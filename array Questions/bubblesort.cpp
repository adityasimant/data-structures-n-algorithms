#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1};
    int temp;

    // 1 variable for size of array so that array can be taken input if needed
    int sizeArr = sizeof(arr) / 4;

    // 4 doing surfing n number of times
    for (int j = 0; j <= sizeArr; j++)
    {
        // 2 surfing through array to swap
        for (int i = 0; i <= sizeArr; i++)
        {
            // 3 bubble sort
            if (arr[i] > arr[i + 1])
            {

                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    // 5 printing array

    for (int k = 0; k < sizeArr; k++)
    {

        cout << arr[k] << " ";
    }
    return 0;
}