// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int c = 2; c <= n / 2; c++)
    {
        int b = n - c;
        if (isPrime(c) && isPrime(b))
        {
            cout << c << " " << b << endl;
            return 0;
        }
    }
    return 0;
}
