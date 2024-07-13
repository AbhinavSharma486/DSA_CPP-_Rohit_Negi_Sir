// ^ Print the pattern
// &            *
// &          * * *
// &        * * * * *
// &      * * * * * * *
// &    * * * * * * * * *

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
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            // ! Printing the *
            cout << "* ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &              1
// &            1 2 1
// &          1 2 3 2 1
// &        1 2 3 4 3 2 1
// &      1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= (5 - row); col++)
        {
            // ~Printing the space
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            // ! Printing the numbers
            cout << col << " ";
        }
        for (col = row - 1; col >= 1; col--)
        {
            // & Printing the reverse numbers
            cout << col << " ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &     * * * * * * * * *
// &       * * * * * * *
// &         * * * * *
// &           * * *
// &             *

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row - 1; col++)
        {
            // ~ Printing the space
            cout << "  ";
        }
        for (col = 1; col <= 9 - (2 * (row - 1)); col++)
        {
            // ! printing the *
            cout << "* ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &      * * * * * * * *
// &      * * *     * * *
// &      * *         * *
// &      *             *
// &      *             *
// &      * *         * *
// &      * * *     * * *
// &      * * * * * * * *

#include <iostream>
using namespace std;
int main()
{
    int row, col;

    // * printing the upper part
    for (row = 4; row >= 1; row--)
    {
        // ~ Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // ! Printing the space
        for (col = 1; col <= 8 - (2 * (row)); col++)
        {
            cout << "  ";
        }
        // & Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // * printing the lower part
    for (row = 1; row <= 4; row++)
    {
        // ~ Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // ! Printing the space
        for (col = 1; col <= 8 - (2 * (row)); col++)
        {
            cout << "  ";
        }
        // & Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &     *             *
// &     * *         * *
// &     * * *     * * *
// &     * * * * * * * *
// &     * * *     * * *
// &     * *         * *
// &     *             *

#include <iostream>
using namespace std;
int main()
{
    int row, col;

    // * Printing the upper part
    for (row = 1; row <= 4; row++)
    {
        // ~ Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // ! Printing the space
        for (col = 1; col <= 8 - (2 * row); col++)
        {
            cout << "  ";
        }
        // ~ Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // * Printing the lower part
    for (row = 3; row >= 1; row--)
    {
        // ~ Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // ! Printing the space
        for (col = 1; col <= 8 - (2 * row); col++)
        {
            cout << "  ";
        }
        // ~ Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// ^ Print the pattern
// &         *
// &        * *
// &       * * *
// &      * * * *
// &      * * * *
// &       * * *
// &        * *
// &         *

#include <iostream>
using namespace std;
int main()
{
    int row, col;

    // * Printing the upper part
    for (row = 1; row <= 4; row++)
    {
        // ~ Printing the space
        for (col = 1; col <= 4 - row; col++)
        {
            cout << " ";
        }
        // ! Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // * Printing the lower part
    for (row = 4; row >= 1; row--)
    {
        // ~ Printing the space
        for (col = 1; col <= 4 - row; col++)
        {
            cout << " ";
        }
        // ! Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// ! Homework start form here

// * 1 First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

// &     *
// &    * *
// &   * * *
// &  * * * *
// & * * * * *

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // ^ Printing the space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " " << " ";
        }

        // ^ Printing the  *
        for (int j = 1; j <= i; j++)
        {
            cout << "*   ";
        }

        cout << endl;
    }
}

// * 2 Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

// &          1
// &        1 2 3
// &      1 2 3 4 5
// &    1 2 3 4 5 6 7
// &  1 2 3 4 5 6 7 8 9

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // ~ Printing space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  " << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}

// * 3 Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

// &         A
// &       A B A
// &     A B C B A
// &   A B C D C B A
// & A B C D E D C B A

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // ~ Printing space
        for (int j = 0; j <= 5 - i - 1; j++)
        {
            cout << "   ";
        }

        // ! Printing increasing pattern
        for (char ch = 'A'; ch < 'A' + i + 1; ch++)
        {
            cout << ch << "  ";
        }

        // ^ Printing Decreasing pattern
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--)
        {
            cout << ch << "  ";
        }

        cout << endl;
    }
}

// * 4 Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

// &          *
// &         * *
// &        * * *
// &       * * * *
// &      * * * * *
// &      * * * * *
// &       * * * *
// &        * * *
// &         * *
// &          *

#include <iostream>
using namespace std;
int main()
{
    int row, col;

    // * Printing the upper part
    for (row = 1; row <= 5; row++)
    {
        // ~ Printing the space
        for (col = 1; col <= 5 - row; col++)
        {
            cout << " ";
        }
        // ! Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // * Printing the lower part
    for (row = 5; row >= 1; row--)
    {
        // ~ Printing the space
        for (col = 1; col <= 5 - row; col++)
        {
            cout << " ";
        }
        // ! Printing the *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}