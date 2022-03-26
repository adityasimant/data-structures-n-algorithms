#include <iostream>
using namespace std;

int main()
{

    int a[] = {5, 4, 3, 2, 1}; 
    int n = 5;

    for (int i = 0; i < 5; i++)  //  n
    {
        int crtInd = i - 1;   
        int j =i ;
       while (crtInd >= 0)   //  nqq
        {
            if (a[crtInd] >= a[j])
            {
                int temp = a[crtInd];
                a[crtInd] = a[j];
                a[j] = temp;
            }
            crtInd--;
            j--;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}