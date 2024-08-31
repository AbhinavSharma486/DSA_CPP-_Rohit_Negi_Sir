// * Exception Handling :-

// & Example 1 :-

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int balance, account_number;

public:
  Customer(string name, int balance, int acccount_number)
  {
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
  }

  // & deposit
  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
      cout << amount << "rs is credited successfully" << endl;
    }
    else
    {
      cout << "amount should bhe greater than 0" << endl;
    }
  }

  // ^ Withdraw
  void withdraw(int amount)
  {
    if (amount > 0 && amount <= balance)
    {
      cout << amount << "rs is debited successfully" << endl;
    }
    else if (amount < 0)
    {
      cout << "Amount should be greater than 0" << endl;
    }
    else
    {
      cout << "Your amount is less than your entered amount" << endl;
    }
  }
};

int main()
{
  Customer C1("Abhinav", 10000, 6004);

  C1.deposit(5000);
  C1.withdraw(18000);

  return 0;
}




// & Example 2 = Exception handling : usint throw keywork and using try catch block

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int balance, account_number;

public:
  Customer(string name, int balance, int acccount_number)
  {
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
  }

  // & deposit
  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
      cout << amount << "rs is credited successfully" << endl;
    }
    else
    {
      throw "amount should bhe greater than 0";
    }
  }

  // ^ Withdraw
  void withdraw(int amount)
  {
    if (amount > 0 && amount <= balance)
    {
      cout << amount << "rs is debited successfully" << endl;
    }
    else if (amount < 0)
    {
      throw "Amount should be greater than 0";
    }
    else
    {
      throw "Your amount is less than your entered amount";
    }
  }
};

int main()
{
  Customer C1("Abhinav", 10000, 6004);

  try
  {
    C1.deposit(5000);
    C1.withdraw(18000);
  }
  catch (const char *e)
  {
    cout << "Exception occured : " << e << endl;
  }

  return 0;
}




// & Example 3 :-

#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter a & b : ";
  cin >> a >> b;

  try
  {
    if (b == 0)
    {
      throw "Divided by 0 is not possible ";
    }

    int c = a / b;

    cout << c << endl;
  }
  catch (const char *e)
  {
    cout << "Exception occured : " << e << endl;
  }

  return 0;
}




// & Example 4 :-

#include <iostream>
using namespace std;
int main()
{
  try
  {
    int *p = new int[1000000000000];
    cout << "Memory allocation is successfully" << endl;
    delete[] p;
  }
  catch (const exception &e)
  {
    cout << "Exception occured : " << e.what() << endl;
  }

  return 0;
}




// & Example 5 :-

#include <iostream>
#include <exception>
using namespace std;

class exception
{
protected:
  string msg;

public:
  exception(string msg)
  {
    this->msg = msg;
  }

  string what()
  {
    return msg;
  }
};

int main()
{
  try
  {
    int *p = new int[1000000000000];
    cout << "Memory allocation is successfully" << endl;
    delete[] p;
  }
  catch (const bad_alloc &e)
  {
    cout << "Exception occured : " << e.what() << endl;
  }

  return 0;
}




// & Example 6 :-

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int balance, account_number;

public:
  Customer(string name, int balance, int acccount_number)
  {
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
  }

  // & deposit
  void deposit(int amount)
  {
    if (amount <= 0)
      throw runtime_error("amount should bhe greater than 0");

    balance += amount;
    cout << amount << "rs is credited successfully" << endl;
  }

  // ^ Withdraw
  void withdraw(int amount)
  {
    if (amount > 0 && amount <= balance)
    {
      cout << amount << "rs is debited successfully" << endl;
    }
    else if (amount < 0)
    {
      throw runtime_error("Amount should be greater than 0");
    }
    else
    {
      throw "Your amount is less than your entered amount";
    }
  }
};

int main()
{
  Customer C1("Abhinav", 10000, 6004);

  try
  {
    C1.deposit(5000);
    C1.withdraw(18000);
  }
  catch (const runtime_error &e)
  {
    cout << "Exception occured : " << e.what() << endl;
  }
  catch (const bad_alloc &e)
  {
    cout << "Exception occured : " << e.what() << endl;
  }
  catch (...)
  {
    cout << "Exception occured : " << endl;
  }

  return 0;
}




// & Example 7 :-

#include <iostream>
using namespace std;

class InvalidAmountError : public runtime_error
{
public:
  InvalidAmountError(const string &msg) : runtime_error(msg) {};
};

class InsufficientBalanceError : public runtime_error
{
public:
  InsufficientBalanceError(const string &msg) : runtime_error(msg) {};
};

class Customer
{
  string name;
  int balance, account_number;

public:
  Customer(string name, int balance, int acccount_number)
  {
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
  }

  // & deposit
  void deposit(int amount)
  {
    if (amount <= 0)
      throw InvalidAmountError("amount should bhe greater than 0");

    balance += amount;
    cout << amount << "rs is credited successfully" << endl;
  }

  // ^ Withdraw
  void withdraw(int amount)
  {
    if (amount > 0 && amount <= balance)
    {
      cout << amount << "rs is debited successfully" << endl;
    }
    else if (amount < 0)
    {
      throw InvalidAmountError("Amount should be greater than 0");
    }
    else
    {
      throw InsufficientBalanceError("Your amount is less than your entered amount");
    }
  }
};

int main()
{
  Customer C1("Abhinav", 10000, 6004);

  try
  {
    C1.deposit(5000);
    C1.withdraw(18000);
  }
  catch (const InvalidAmountError &e)
  {
    cout << "Exception occured : " << e.what() << endl;
  }
  catch (const InsufficientBalanceError &e)
  {
    cout << "Exception occured : " << e.what() << endl;
  }
  catch (...)
  {
    cout << "Exception occured : " << endl;
  }

  return 0;
}