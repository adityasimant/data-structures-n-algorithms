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

    cout << digit(0, 3251);
    return 0;
}