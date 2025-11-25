// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;

void distance(int depth)
{
    if (depth == 0)
        return;
    cout << "|--";
    distance(depth - 1);
}
int fib(int n, int depth)
{
    // Entering fib(n)
    distance(depth);
    cout << "SEARCH fib(" << n << ")" << endl;

    // Base cases
    if (n == 1)
    {
        distance(depth);
        cout << "GET fib(1) = 1" << endl;
        return 1;
    }
    if (n == 2)
    {
        distance(depth);
        cout << "GET fib(2) = 1" << endl;
        return 1;
    }

    int a = fib(n - 1, depth + 1);
    int b = fib(n - 2, depth + 1);

    int result = a + b;

    distance(depth);
    cout << "GET fib(" << n << ") = " << result << endl;

    return result;
}

int main()
{
    int n;
    cin >> n;

    int ans = fib(n, 0);
    cout << ans << endl;
    return 0;
}
