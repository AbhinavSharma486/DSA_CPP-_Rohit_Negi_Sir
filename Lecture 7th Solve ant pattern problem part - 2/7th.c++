// ^ Print this pattern
// & *
// & * *
// & * * *
// & * * * *
// & * * * * *

#include <iostream>
using namespace std;
int main()
{
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

// ^ Print this pattern
// & 1
// & 1 2
// & 1 2 3
// & 1 2 3 4
// & 1 2 3 4 5

#include <iostream>
using namespace std;
int main()
{
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// & 1
// & 2 2
// & 3 3 3
// & 4 4 4 4
// & 5 5 5 5 5

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// & 1
// & 2 1
// & 3 2 1
// & 4 3 2 1
// & 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// & a
// & b b
// & c c c
// & d d d d
// & e e e e e

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            char ch = 'a' + (row - 1);
            cout << ch << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// & * * * * *
// & * * * *
// & * * *
// & * *
// & *

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - (row - 1); col++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// & 1 2 3 4 5
// & 1 2 3 4
// & 1 2 3
// & 1 2
// & 1

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - (row - 1); col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// & 5
// & 5 4
// & 5 4 3
// & 5 4 3 2
// & 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 5; col >= 5 - (row - 1); col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

// ! Homework start from here

// * 1 First Pattern :
// & 1
// & 1 2
// & 1 2 3
// & 1 2 3 4
// & 1 2 3 4 5
// & 1 2 3 4 5 6
// & 1 2 3 4 5 6

#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

// * 2 Second Pattern :

// & A
// & A B
// & A B C
// & A B C D
// & A B C D E

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char c = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}

// * 3 Third Pattern :

// & 10
// & 10 11
// & 10 11 12
// & 10 11 12 13
// & 10 11 12 13 14
// & 10 11 12 13 14 15

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        int a = 10;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}

// * Fourth Pattern :-

// & A B C D
// & A B C
// & A B
// & A

#include <iostream>
using namespace std;
int main()
{
    for (int i = 4; i >= 1; i--)
    {
        char c = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}