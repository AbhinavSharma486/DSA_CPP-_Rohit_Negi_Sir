// * Default Constructor :-

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;

public:
  // & Default Constructor
  Customer()
  {
    cout << "Default constructor";
  }
};

int main()
{
  Customer A1;
}




#include <iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;

public:
  // & Default Constructor
  Customer()
  {
    name = "Abhinav";
    account_number = 214657;
    balance = 10000;
  }

  void display()
  {
    cout << "Name : " << name << endl;
    cout << "Account no. : " << account_number << endl;
    cout << "Balance : " << balance << endl;
  }
};

int main()
{
  Customer A1;
  A1.display();
}






// * Parameterized Constructor

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;

public:
  Customer()
  {
    name = "Abhinav";
    account_number = 6004;
    balance = 100000000;
  }

  // ^ Parameterized Constructor
  Customer(string a, int b, int c)
  {
    name = a;
    account_number = b;
    balance = c;
  }

  void display()
  {
    cout << "Name : " << name << endl;
    cout << "Account no. : " << account_number << endl;
    cout << "Balance : " << balance << endl;
  }
};

int main()
{
  Customer A1;
  Customer A2("Rohit", 23, 154846);
  A1.display();
  A2.display();

  return 0;
}





// * Constructor overloading

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;

public:
  Customer()
  {
    name = "Abhinav";
    account_number = 6004;
    balance = 100000000;
  }
  // ^ Constructor overloading
  Customer(string a, int b)
  {
    name = a;
    account_number = b;
  }

  void display()
  {
    cout << "Name : " << name << endl;
    cout << "Account no. : " << account_number << endl;
    cout << "Balance : " << balance << endl;
  }
};

int main()
{
  Customer A1;
  Customer A2("Mohit", 2255);

  A1.display();
  A2.display();

  return 0;
}





// * Inline Constructor

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;

public:
  Customer()
  {
    name = "Abhinav";
    account_number = 6004;
    balance = 100000000;
  }

  // ^ Inline Constructor
  inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c) {}
  void display()
  {
    cout << "Name : " << name << endl;
    cout << "Account no. : " << account_number << endl;
    cout << "Balance : " << balance << endl;
  }
};

int main()
{
  Customer A1;
  Customer A2("Mohit", 2255, 364841);

  A1.display();
  A2.display();

  return 0;
}





// * Copy Constructor

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;

public:
  Customer()
  {
    name = "Abhinav";
    account_number = 6004;
    balance = 100000000;
  }

  inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c) {}
  void display()
  {
    cout << "Name : " << name << endl;
    cout << "Account no. : " << account_number << endl;
    cout << "Balance : " << balance << endl;
  }

  // ^ Copy Constructor
  Customer(Customer &B)
  {
    name = B.name;
    account_number = B.account_number;
    balance = B.balance;
  }
};

int main()
{
  Customer A1;
  Customer A2("Mohit", 2255, 364841);

  // ^ Copying value of A2 in A3
  Customer A3(A2);
  Customer A4;
  // ^ Copying value of A3 in A4
  A4 = A3;

  A1.display();
  A2.display();
  A3.display();
  A4.display();

  return 0;
}





// * Destructor :-

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int *data;

public:
  Customer()
  {
    name = "Abhinav";
    data = new int;
    *data = 564446;
    cout << "constructor is called \n";
  }

  // ^ Destructor
  ~Customer()
  {
    delete data;
    cout << "Destructor is called \n";
  }
};

int main()
{
  Customer A1;
}




#include <iostream>
using namespace std;

class Customer
{
  string name;
  int *data;

public:
  Customer(string name)
  {
    this->name = name;
    cout << "Constructor name : " << name << endl;
  }

  ~Customer()
  {
    cout << "Destructor name : " << name << endl;
  }
};

int main()
{
  Customer A1("1"), A2("2"), A3("3");
}