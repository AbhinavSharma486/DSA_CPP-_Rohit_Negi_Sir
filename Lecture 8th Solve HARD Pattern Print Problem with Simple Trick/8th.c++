// ^ Print the pattern
// &         *
// &       * *
// &     * * *
// &   * * * *
// & * * * * *

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            // ~ Printing the space
            cout << " " << " ";
        }
        for (col = 1; col <= row; col++)
        {
            // ! Printing the *
            cout << "*" << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &         1
// &       2 2
// &     3 3 3
// &   4 4 4 4
// & 5 5 5 5 5

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            // ~ Printing the space
            cout << " " << " ";
        }
        for (col = 1; col <= row; col++)
        {
            // ! Printing the numbers
            cout << row << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &         1
// &       1 2
// &     1 2 3
// &   1 2 3 4
// & 1 2 3 4 5

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            // ~ Printing the space
            cout << " " << " ";
        }
        for (col = 1; col <= row; col++)
        {
            // ! Printing the numbers
            cout << col << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &          A
// &        A B
// &      A B C
// &    A B C D
// &  A B C D E

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            // ~ Printing the space
            cout << " " << " ";
        }
        for (col = 1; col <= row; col++)
        {
            // ! Printing the aplhabets
            char ch = 'A' + (col - 1);
            cout << ch << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &         1
// &       2 1
// &     3 2 1
// &   4 3 2 1
// & 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            // ~ Printing the space
            cout << " " << " ";
        }
        for (col = row; col >= 1; col--)
        {
            // ! Printing the numbers
            cout << col << " ";
        }
        cout << endl;
    }
}

// ! Homework start from here

// * 1 First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

// &         1
// &       2 1
// &     3 2 1
// &   4 3 2 1
// & 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " " << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

// * 2 Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

// &         A
// &       B B
// &     C C C
// &   D D D D
// & E E E E E

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        char c = 'A' + i;

        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " " << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
}

// * 3 Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this

// &         5
// &       5 4
// &     5 4 3
// &   5 4 3 2
// & 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " " << " ";
        }

        for (int j = 5; j >= 6 - i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// * 4 Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this

// &         E
// &       E D
// &     E D C
// &   E D C B
// & E D C B A

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " " << " ";
        }

        for (char j = 'E'; j >= 'F' - i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}