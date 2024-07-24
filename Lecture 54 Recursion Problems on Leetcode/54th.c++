// * Fibonacci Series :-

// & Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int first = 0, second = 1, nextTerm = 0;
    for (int i = 0; i < n; i++)
    {
        nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    cout << "The term at index " << n << " in fibonacci series is : " << first;

    return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
int Fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return Fibo(n - 1) + Fibo(n - 2);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int res = Fibo(n);

    cout << "The term at index " << n << " in fibonacci series is : " << res;

    return 0;
}






// * Nth Stair :-

// & Method 1 : Using Iterative method

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int first = 1, second = 1, nextTerm;
    for (int i = 0; i < n; i++)
    {
        nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    cout << "At Stair " << n << " we have : " << first << " numbers of ways";

    return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
int TotalWays(int n)
{
    // Base Case
    if (n <= 1)
    {
        return 1;
    }

    return TotalWays(n - 1) + TotalWays(n - 2);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int res = TotalWays(n);

    cout << res;

    return 0;
}





// * GCD(Greatest Common Divisor) of 2 numbers :-

// & Method 1 : Using Iterative for loop approach

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a & b : ";
    cin >> a >> b;

    int minOFaANDb = min(a, b);
    for (int i = 1; i <= minOFaANDb; i++)
    {
        if (b == 0)
        {
            cout << "GCD: " << a;
            return 0;
        }

        int modeOFaANDb = a % b;
        a = b;
        b = modeOFaANDb;
    }

    return 0;
}

// & Method 2 : Using While loop approach

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD: " << a << endl;
    return 0;
}

// & Method 3 : Using Euler's Algorithm with recursion

#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    GCD(b, a % b);
}
int main()
{
    int a, b;
    cout << "Enter a & b : ";
    cin >> a >> b;

    int res = GCD(a, b);
    cout << "The GCD of " << a << " & " << b << " is : " << res;

    return 0;
}