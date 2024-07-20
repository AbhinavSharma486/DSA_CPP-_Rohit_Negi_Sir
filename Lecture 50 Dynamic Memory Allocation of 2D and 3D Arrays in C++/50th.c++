// & Creation of 2d array with the help of pointers :-

#include <iostream>
using namespace std;
int main()
{
    // ^ Array create karna hai , jo store krega address ko
    int n, m;
    cout << "Enter no. of rows and no. of columns : ";
    cin >> n >> m;

    cout << endl;

    int **ptr = new int *[n];

    // ^ created 2d array
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }

    // ! enter values of 2d array by user
    cout << "Enter values of 2d array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ptr[i][j];
        }
    }

    cout << endl;

    // * print the values
    cout << "2d array will be : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // ^ Release the memory , heap mei
    for (int i = 0; i < n; i++)
    {
        delete[] ptr[i];
    }

    delete[] ptr;
    return 0;
}

// & Creation of 3d array with the help of pointers :-
#include <iostream>
using namespace std;
int main()
{
    int L, B, H;
    cout << "Enter L, B & H : ";
    cin >> L >> B >> H;

    // declare 1d array whose store address of 2d array
    int ***ptr = new int **[L];

    // create 2d array and store it's address in ptr
    for (int i = 0; i < L; i++)
    {
        ptr[i] = new int *[B];

        for (int j = 0; j < B; j++)
        {
            ptr[i][j] = new int[H];
        }
    }

    // values entered by user
    cout << "Enter the values for the 3D array:" << endl;
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cin >> ptr[i][j][k];
            }
        }
    }
    cout << endl;

    // Print 3d array
    cout << "3D array values are:" << endl;
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Deletion of memory
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}