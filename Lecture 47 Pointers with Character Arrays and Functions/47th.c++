#include <iostream>
using namespace std;
int main()
{
    char arr[5] = {"1234"};

    char *ptr = arr;

    cout << arr << endl;                      // Printing value
    cout << static_cast<void *>(arr) << endl; // Printing address

    cout << ptr << endl;                      // Printing value
    cout << static_cast<void *>(ptr) << endl; // Printing address

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    char arr[5] = {"1234"};

    char *ptr = arr;

    cout << (void *)arr << endl; // Printing address

    cout << (void *)ptr << endl; // Printing address
}

#include <iostream>
using namespace std;
int main()
{
    char name = 'a';

    char *ptr1 = &name;

    cout << (void *)&name << endl;

    cout << (void *)ptr1 << endl;
}

// &How to swap values using pointers with function : -

#include <iostream>
using namespace std;
int swapping(int *p1, int *p2) // ~ Pass by pointer
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int first = 10;
    int second = 20;

    cout << "Before swapping " << endl;

    cout << "First = " << first << "  Second  = " << second;

    cout << endl;

    swapping(&first, &second);

    cout << "After swapping " << endl;

    cout << "First = " << first << "  Second  = " << second;
}

// &Pass by refrence variable

#include <iostream>
using namespace std;
int swapping(int &p1, int &p2) // ~ Pass by refrence variable
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
int main()
{
    int first = 10;
    int second = 20;

    cout << "Before swapping " << endl;

    cout << "First = " << first << "  Second  = " << second;

    cout << endl;

    swapping(first, second);

    cout << "After swapping " << endl;

    cout << "First = " << first << "  Second  = " << second;

    return 0;
}

// &Example : -

#include <iostream>
#include <vector>
using namespace std;
void Pass(vector<int> &v1)
{
    for (int i = 0; i < 5; i++)
    {
        v1[i] = 10;
    }
}
int main()
{
    vector<int> v(5, 0);

    cout << "Vector before = ";

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    Pass(v);

    cout << "Vector after = ";

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}