// * Factorial of a no. :-

// & Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << " is : " << fact;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int factorial = fact(n);

    cout << "Factorial of " << n << " is : " << factorial;

    return 0;
}





// * Sum of n natural number :-

// & Method 1 : Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum from 1 to " << n << " natural no. is : " << sum;

    return 0;
}

// & Method 2 : Using Recursive approach
#include <iostream>
using namespace std;
int Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + Sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int res = Sum(n);

    cout << res;

    return 0;
}





// * Power of 2 :-

// & Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int power;
    cout << "Enter no. of times : ";
    cin >> power;

    int result = n;

    for (int i = 1; i <= power; i++)
    {
        result = n * result;
    }

    cout << n << "^" << power << " result is : " << result;

    return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
int POWER(int n, int p)
{
    if (p == 1)
    {
        return n;
    }

    return n * POWER(n, p - 1);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int power;
    cout << "Enter no. of times : ";
    cin >> power;

    int result = POWER(n, power);

    cout << n << "^" << power << " result is : " << result;

    return 0;
}





// * Sum of square of n natural numbers  :-

// & Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    cout << "Square of no. from " << 1 << " to " << n << " is : " << sum;
    return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
int SqSum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * n + SqSum(n - 1);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int res = SqSum(n);

    cout << "Square of no. from " << 1 << " to " << n << " is : " << res;
    return 0;
}