#include <iostream>
using namespace std;

int digit(int x, int n)
{

    if (n / 10 < 1)
    {
        return x + 1;
    }
    x++;
    return digit(x, n / 10);
}

int main()
{
    cout<<"Entre the number : ";
    int x;
    cin>>x;
    cout << digit(0, x);
    return 0;
}