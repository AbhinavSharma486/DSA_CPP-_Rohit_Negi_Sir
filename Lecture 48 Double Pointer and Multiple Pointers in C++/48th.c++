#include <iostream>
using namespace std;
void fun(int *p1)
{
    p1++; // address doesn't change using this method
}
int main()
{
    int n = 10;

    int *p1 = &n; // single pointer

    int **p2 = &p1; // double pointer

    int ***p3 = &p2; // triple pointer

    cout << n << endl;

    fun(p1);

    cout << *p1 << endl;
    cout << p1 << endl;

    return 0;
}




#include <iostream>
using namespace std;
int main()
{
    int n = 10;

    int *p1 = &n; // single pointer

    int **p2 = &p1; // double pointer

    int ***p3 = &p2; // triple pointer

    cout << p1 << endl;
    cout << &p1 << endl;
    cout << p2 << endl;
    cout << &p2 << endl;
    cout << p3 << endl;

    return 0;
}




#include <iostream>
using namespace std;
void fun(int *p1)
{
    p1++; // address doesn't change using this method
}
int main()
{
    int n = 10;

    int *p1 = &n; // single pointer

    int **p2 = &p1; // double pointer

    int ***p3 = &p2; // triple pointer

    fun(p1);

    cout << p1 << endl;

    return 0;
}




#include <iostream>
using namespace std;
int main()
{
    int n = 10;

    int *p1 = &n; // single pointer

    int **p2 = &p1; // double pointer

    int ***p3 = &p2; // triple pointer

    // value ko modify karna ho, jo n mei rakhi hai....

    *p1 = *p1 + 5; // modifying value of n using single pointer
    cout << n << endl;

    **p2 = **p2 + 5; // modifying value of n using double pointer
    cout << n << endl;

    ***p3 = ***p3 + 5; // modifying value of n using three pointer
    cout << n << endl;

    return 0;
}




#include <iostream>
using namespace std;
void fun(int *p1)
{
    // *p1 = *p1 + 10;
}
int main()
{
    int n = 10;

    int *p1 = &n; // single pointer

    int **p2 = &p1; // double pointer

    fun(p1);

    cout << n << " " << endl;
    cout << *p1 << " ";

    return 0;
}




#include <iostream>
using namespace std;
void fun(int *p1)
{
    p1++; // address doesn't change using this method
}
int main()
{

    int n = 10;

    int *p1 = &n; // single pointer

    int **p2 = &p1; // double pointer

    cout << p1 << endl;
    fun(p1);
    cout << p1 << endl;
    return 0;
}




#include <iostream>
using namespace std;
void fun(int **p2)
{
    *p2 = *p2 + 1; // address change by using this method
}
int main()
{

    int n = 10;

    int *p1 = &n; // single pointer

    int **p2 = &p1; // double pointer

    cout << p1 << endl;
    fun(p2);
    cout << p1 << endl;
    return 0;
}




#include <iostream>
using namespace std;
int four(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
int main()
{
    int c, *b, **a;
    c = 4, b = &c, a = &b;
    cout << four(c, b, a);
}




#include <iostream>
using namespace std;
int five(char *str1, char *str2)
{
    while ((*str1 = *str2))
    {
        str1++, str2++;
    }
}
int main()
{
    char first[] = "Mohit";
    char second[] = "Rohan";
    five(first, second);
    cout << first << endl;
    return 0;
}




#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int *p = &n;
    int **q = &p;
    cout << p << endl;
    return 0;
}