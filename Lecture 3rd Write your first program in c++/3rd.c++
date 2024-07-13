// ! Homework start from here

// * 1. Two numbers are given, print their product

#include <iostream>
using namespace std;
int main()
{
    int a, b, p;
    cout << "Enter a & b = ";
    cin >> a >> b;

    p = a * b;

    cout << "Product of " << a << " & " << b << " is = " << p;
    return 0;
}

// * 2. Two numbers are given a and b, print a-b

#include <iostream>
using namespace std;
int main()
{

    int a, b, s;
    cout << "Enter a & b = ";
    cin >> a >> b;

    s = a - b;

    cout << "Subtraction of " << a << " - " << b << " is = " << s;
    return 0;
}

// * 3. Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a & b = ";
    cin >> a >> b;

    cout << a << "*" << b;
    return 0;
}

// * 4. If we have only 4 bits, How 3 and -6 will be written in 4 bits.

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    // Positive number 3
    int positive_num = 3;
    bitset<4> pos_bits(positive_num);
    cout << "3 in 4-bit binary: " << pos_bits << endl;

    // Negative number -6
    int negative_num = -6;
    bitset<4> neg_bits(negative_num);
    cout << "-6 in 4-bit two's complement binary: " << neg_bits << endl;

    return 0;
}

// * 5. If we have only 5 bits, How 13 and -16 will be written in 5 bits.

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    // Positive number 13
    int positive_num = 13;
    bitset<5> pos_bits(positive_num);
    cout << "13 in 5-bit binary: " << pos_bits << endl;

    // Negative number -16
    int negative_num = -16;
    bitset<5> neg_bits(negative_num);
    cout << "-16 in 4-bit two's complement binary: " << neg_bits << endl;

    return 0;
}
