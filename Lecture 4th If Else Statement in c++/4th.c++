// ~ TypeCasting Concept :-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     char c = 'a';
//     c = a;
//     cout << c;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cin >> c;

//     if (c == 'a')
//     {
//         cout << "vowel";
//     }

//     else if (c == 'e')
//     {
//         cout << "vowel";
//     }

//     else if (c == 'i')
//     {
//         cout << "vowel";
//     }

//     else if (c == 'o')
//     {
//         cout << "vowel";
//     }

//     else if (c == 'u')
//     {
//         cout << "vowel";
//     }
//     else
//     {
//         cout << "consonent";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cin >> c;

//     if (c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u')
//     {
//         cout << "vowel";
//     }
//     else
//     {
//         cout << "consonent";
//     }
// }

// ! Print square from 1 to n
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << " "
//              << "="
//              << " " << i * i << endl;
//     }
// }

// ^ Print all even numbers up to 20;
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 20; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// ! Homework Start from here

// & ● If-else
// * 1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a & b = ";
    cin >> a >> b;

    if (a == b)
    {
        cout << "Both no. cann't be same";
    }
    else
    {
        if (a > b)
        {
            cout << a;
        }
        else
        {
            cout << b;
        }
    }

    return 0;
}

// * 2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age = ";
    cin >> age;

    if (age > 18)
    {
        cout << "Adult";
    }
    else
    {
        cout << "Teenager";
    }
    return 0;
}

// * 3. Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. which is greater than 0 and less than 13 = ";
    cin >> n;

    if (n > 0 && n < 13)
    {
        if (n == 1)
        {
            cout << "January";
        }
        else if (n == 2)
        {
            cout << "February";
        }
        else if (n == 3)
        {
            cout << "March";
        }
        else if (n == 4)
        {
            cout << "April";
        }
        else if (n == 5)
        {
            cout << "May";
        }
        else if (n == 6)
        {
            cout << "June";
        }
        else if (n == 7)
        {
            cout << "July";
        }
        else if (n == 8)
        {
            cout << "August";
        }
        else if (n == 9)
        {
            cout << "September";
        }
        else if (n == 10)
        {
            cout << "October";
        }
        else if (n == 11)
        {
            cout << "November";
        }
        else
        {
            cout << "December";
        }
    }
    else
    {
        return -1;
    }
    return 0;
}

// * 4. Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age to check u are eligible to get discount on ticket = ";
    cin >> age;

    if (age < 12 || age > 65)
    {
        cout << "Yes u can get discount";
    }
    else
    {
        cout << "No u didn't get discount";
    }
    return 0;
}

// & ● For Loop
// * 1. Print “India will win the World Cup 2023”, 20 times.

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        cout << i << " India will win the World Cup 2023" << endl;
    }
    return 0;
}

// * 2. Print all Odd numbers from 1 to n, take n as an input from the user.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}

// * 3. Print all numbers from 1 to n, which is divisible by 4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}