#include <iostream>
using namespace std;
int commonFactors(int a, int b);
int main()
{
    cout <<commonFactors(25, 30)<< endl;
    return 0;
}
int commonFactors(int a, int b)
{
    long i = 1;
    long c = 0;
    while (i <= b || i <= a)
    {
        if (a % i == 0 && b % i == 0)
        {
            c++;
        }
        i++;
    }
    return c;
}