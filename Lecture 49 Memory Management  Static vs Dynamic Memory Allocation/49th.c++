#include <iostream>
using namespace std;
int main()
{
    // variable ke liye heap memory allocate kro
    int *ptr = new int;
    cout << ptr << endl;
    *ptr = 5; // value assign
    cout << *ptr << endl;

    float *ptr2 = new float;
    *ptr2 = 3.54875;
    cout << *ptr2 << endl;

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int *p = new int[n];

    // value dalo in array
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    // Print kra do array ke values ko
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    // use of delete keyword
    delete ptr;
    delete ptr2;
    delete[] p;
}