// * Print no. from 1 to n :-

// & Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    cout << "Using Iterative approach : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
void Print(int start, int end)
{
    if (start == end)
    {
        cout << start;
        return;
    }
    cout << start << " ";
    Print(start + 1, end);
}
int main()
{
    int start = 1, end = 10;
    cout << "Using Recursive approach : " << endl;
    Print(start, end);

    return 0;
}

// & Method 3 : Using only 1 argument approach

#include <iostream>
using namespace std;
void Print(int num)
{
    if (num == 1)
    {
        cout << 1 << " ";
        return;
    }
    Print(num - 1);
    cout << num << " ";
}
int main()
{
    int num = 10;
    cout << "Using only 1 argument approach : " << endl;
    Print(num);

    return 0;
}






// * Print Even no. from 1 to n :-

// & Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    cout << "Using Iterative approach : " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
void Print(int start, int end)
{
    if (start % 2 == 0 && start <= end)
    {
        cout << start << " ";
    }
    Print(start + 1, end);
}
int main()
{
    int start = 1, end = 11;
    cout << "Using Recursive approach : " << endl;
    Print(start, end);

    return 0;
}

// & Method 3 : By Rohit Negi Sir

#include <iostream>
using namespace std;
void PrintEven(int num, int n)
{
    if (num > n)
    {
        return;
    }

    cout << num << " ";

    PrintEven(num + 2, n);
}
int main()
{
    int n = 11;

    PrintEven(2, n);

    return 0;
}

// & Method 4 : This method by me Using only 1 argument

#include <iostream>
using namespace std;
void Print(int num)
{
    if (num == 1)
    {
        return;
    }
    Print(num - 1);

    if (num % 2 == 0)
    {
        cout << num << " ";
    }
}
int main()
{
    int num = 11;
    cout << "Using only 1 argument approach : " << endl;
    Print(num);

    return 0;
}

// & Method 5 : By Rohit Negi sir

#include <iostream>
using namespace std;
void PrintEven(int n)
{
    if (n == 2)
    {
        cout << n << " ";
        return;
    }

    PrintEven(n - 2);

    cout << n << " ";
}
int main()
{
    int n = 11;
    if (n % 2 == 1)
    {
        n--;
    }
    PrintEven(n);
    return 0;
}
