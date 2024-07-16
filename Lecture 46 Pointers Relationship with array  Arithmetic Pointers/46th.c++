#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // // Print the address of first element
    cout << arr << endl;
    cout << arr + 0 << endl;
    cout << &arr[0] << endl;
    cout << ptr << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // Print the address of second element
    cout << arr + 1 << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // Print the value at index 0
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr + 0) << endl;
    cout << *ptr << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // sare address ko print kr do
    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << " " << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // Print all the values
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " " << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    //  Print all the values

    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // Print all the address
    for (int i = 0; i < 5; i++)
    {
        cout << ptr + i << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // Arithmetic operation ptr++; ptr--; ptr = ptr + 1;

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};
    int *ptr1 = arr1 + 4;

    for (int i = 5; i > 0; i--)
    {
        cout << *ptr1 << " ";
        ptr1--;
    }

    return 0;
}