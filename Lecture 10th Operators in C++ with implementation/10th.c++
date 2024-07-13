// * 1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.

#include <iostream>
using namespace std;
int main()
{
    int temp;
    cout << "Enter Temperature in degree Fahrenheit = ";
    cin >> temp;

    if (temp >= 70 && temp <= 90)
    {
        cout << "Yes entered temperature is suitable for swimming";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

// * 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    if (n % 2 == 0 && n > 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

// * 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19(inclusive).

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout << "Enter age = ";
//     cin >> age;

//     if (age >= 13 && age <= 19)
//     {
//         cout << "Teenager";
//     }
//     return 0;
// }

// * 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c.Otherwise print NO.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a , b and c = ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

// * 5: What will be the result below according to the precedence table.

// & (1) 2 * 3 - 48 == 5 / 4 * 6
// ^ solution : -42 == 6 results in false (0)
// & (2) 6 << 2 - 4 * 8 / 2
// ^ solution : 6 << -14
// & (3) 5 > 4 < 3 / 2 - 8 % 4 + 5
// ^ solution : 1 < 6 results in true
// & (4) 14 - 8 + 92 >> 2 + 70
// ^ solution : 98 >> 72 results in 0
