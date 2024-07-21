// * Introduction to Recursion From Basic to Advance :-

// & With the help of iterative approach :-

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    // Iterative approach
    for (int i = n; i > 0; i--)
    {
        cout << i << " days left for birthday \n";
    }

    cout << "Happy birthday";
    return 0;
}

// & With the help of function :-

#include <iostream>
using namespace std;
void fun3(int n)
{
    cout << n << " days left for birthday" << endl;
}

void fun2(int n)
{
    cout << n << " days left for birthday" << endl;
}

void fun1(int n)
{
    cout << n << " days left for birthday" << endl;
}

void fun0(int n)
{
    cout << "Happy birthday";
}

int main()
{
    fun3(3);
    fun2(2);
    fun1(1);
    fun0(0);
    return 0;
}

/// & using function only 1 time / call a funciton 1 time :-

#include <iostream>
using namespace std;
void fun0(int n)
{
    cout << "Happy birthday";
}

void fun1(int n)
{
    cout << n << " days left for birthday" << endl;
    fun0(0);
}

void fun2(int n)
{
    cout << n << " days left for birthday" << endl;
    fun1(n - 1);
}

void fun3(int n)
{
    cout << n << " days left for birthday" << endl;
    fun2(n - 1);
}

int main()
{
    fun3(3);
    return 0;
}

// & Using a different approach :- calling a function 1 time and use a void function 1 time

#include <iostream>
using namespace std;

void fun(int n)
{
    // Base case
    if (n == 0)
    {
        cout << "Happy Birthday";
        return;
    }

    cout << n << " days left for birthday" << endl;
    fun(n - 1);
}

int main()
{
    fun(10);

    return 0;
}

// & Print no. from n to 1 :-

// * Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cout << "Using Iterative approach : " << endl;
    for (int i = n; i > 0; i--)
    {
        cout << i << " ";
    }
    return 0;
}

// * Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
void Print(int n)
{
    // Base Case
    if (n == 1)
    {
        cout << 1;
        return;
    }

    cout << n << " ";
    Print(n - 1);
}
int main()
{
    Print(10);

    return 0;
}

// & Print even no. from n to 1 :-

// * Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    cout << "Using Iterative approach : " << endl;
    for (int i = n; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}

// * Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
void Print(int n)
{
    // Base Case
    if (n == 1)
    {
        return;
    }

    if (n % 2 == 0)
    {
        cout << n << " ";
    }

    Print(n - 1);
}
int main()
{
    cout << "Using Recursive approach : " << endl;
    Print(10);

    return 0;
}