// ~ Calculate the pow of no.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, result;
    cout << "Enter the value of a :  ";
    cin >> a;
    cout << "Enter the value of b :  ";
    cin >> b;

    result = pow(a, b);

    cout << a << "^" << b << " "
         << "="
         << " " << result;
    return 0;
}

// ~ Sum of n natural no.

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of n natural no. is : " << sum;
}

// ^ Factorial of a no.

#include <iostream>
using namespace std;
int main()
{
    int n, product = 1;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }

    cout << "Factorial of " << n << "is : " << product;

    return 0;
}

// & Check a no. is Prime of not

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if (n < 2)
    {
        cout << "Not a Prime";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}

// * Print Fibonacci series :-

#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the no. of term : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << t1 << ",";
            continue;
        }

        if (i == 2)
        {
            cout << t2 << ",";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ",";
    }
    return 0;
}

// ! Homework start from here

// * 1. Print number from 280 to 250 with the help of for loop.

#include <iostream>
using namespace std;
int main()
{
    for (int i = 280; i >= 250; i--)
    {
        cout << i << "  ";
    }
    return 0;
}

// * 2. Print char from ‘A’ to ‘Z’ with the help of a for loop.

#include <iostream>
using namespace std;
int main()
{
    char a = 'A';
    for (int i = 0; i < 26; i++)
    {
        cout << a << "  ";
        a++;
    }

    return 0;
}

// * 3. Print char from ‘Z’ to ‘A’ with the help of a for loop.

#include <iostream>
using namespace std;
int main()
{
    char a = 'Z';
    for (int i = 26; i > 0; i--)
    {
        cout << a << "  ";
        a--;
    }
    return 0;
}

// * 4. There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

#include <iostream>
using namespace std;
int main()
{
    int a = 220;
    int d = 7;
    int currentNo = a;

    while (currentNo <= 730)
    {
        cout << currentNo << "  ";
        currentNo += d;
    }
    return 0;
}

// * 5. Print Sum of square of first n natural number.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    int ans;
    for (int i = 1; i <= n; i++)
    {
        ans = n * (n + 1) * (2 * n + 1) / 6;
    }

    cout << "The sum of the squares of the first " << n << " natural numbers is " << ans;

    return 0;
}

// * 6. Print Sum of cube of first n natural number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    int ans;
    for (int i = 1; i <= n; i++)
    {
        int sqr = ((n * (n + 1)) / 2);
        ans = sqr * sqr;
    }

    cout << "The sum of the cube of the first " << n << " natural numbers is " << ans;

    return 0;
}

// * 7. Print n’th Fibonacci number.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    if (n <= 1)
    {
        return n;
    }

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "The " << n << "th Fibonacci number is: " << b << endl;
    return 0;
}