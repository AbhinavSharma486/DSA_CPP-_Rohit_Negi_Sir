// ^ Print the table of given number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value for which you want to write the table. ";
    cin >> n;
    int i = 1;
    while (i <= 10)
    {
        cout << n << " " << "+" << " " << n << " " << "*" << " " << i << " " << "=" << " " << n * i;
        i++;
        cout << endl;
    }
}

// ^ Write a program to find the factors of a given number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value for which you want to write theri factors. ";
    cin >> n;

    int i = 1;
    cout << "These are the possible factors of the enter number = ";
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }
}

// ^ Print all even numbers 0 to 'n'

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    int i = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }
}

// ^ Print all odd numbers 0 to 'n'

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    int i = 0;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        i++;
    }
}

//-------------------------------------------------------------------------------------------------

// & Do While Loop

// ^ Sum of n natural numbers using do while loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n. ";
    cin >> n;

    int sum = 0;
    int i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);

    cout << "Sum of n natural no. = " << sum;
}

//-------------------------------------------------------------------------------------------------

// & Concept of Break and Continue

// & concept of switch case statement

// & concept of scope of a variable

// ? Homework start from here :-

// * 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive).Do this using while and do while loop separately.

// & Method 1 : While loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    int x = 1;
    while (x <= n)
    {
        if (x % 2 == 0)
        {
            cout << x << " ";
        }
        x++;
    }
    return 0;
}

// & Method 2 : Do-While loop
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter n = ";
    cin >> n;

    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= n);
    return 0;
}

// * 2: Find the factorial of a number n using a while loop and do a while loop.

// & Method 1 : While loop
#include <iostream>
using namespace std;
int main()
{
    int n, factorial = 1;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << n << " is = " << factorial;
    return 0;
}

// & Method 2 : Do-While loop
#include <iostream>
using namespace std;
int main()
{
    int n, factorial = 1;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;
    do
    {
        factorial *= i;
        i++;
    } while (i <= n);

    cout << "Factorial of " << n << " is = " << factorial;
    return 0;
}

// * 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5.(use Continue here).

// & Method 1 : using continue
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}

// * 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n = 2, print Feb…, if the user puts any invalid number,don’t do anything.(Use switch here)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "January";
        break;

    case 2:
        cout << "February";
        break;

    case 3:
        cout << "March";
        break;

    case 4:
        cout << "April";
        break;

    case 5:
        cout << "May";
        break;

    case 6:
        cout << "June";
        break;

    case 7:
        cout << "July";
        break;

    case 8:
        cout << "August";
        break;

    case 9:
        cout << "September";
        break;

    case 10:
        cout << "October";
        break;

    case 11:
        cout << "November";
        break;

    case 12:
        cout << "December";
        break;

    default:
        cout << "Enter n in range of 1 to 12";
        break;
    }
}

// * 5: Print all the Capital and small letters using a while loop. It means A - Z, then a - z.

#include <iostream>
using namespace std;
int main()
{
    char A = 'A';
    char a = 'a';
    int i = 1;
    int j = 1;
    while (i <= 26)
    {
        cout << A << "  ";
        A++;
        i++;
    }
    cout << endl;
    while (j <= 26)
    {
        cout << a << " ";
        a++;
        j++;
    }

    return 0;
}

// * 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }

    int i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is a prime no.";
    }
    else
    {
        cout << n << " is not a prime no.";
    }

    return 0;
}