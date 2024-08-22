// * Static Data Member :-

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int acc_num, balance;
  static int total_customer;

public:
  Customer(string name, int account_number, int balance)
  {
    this->name = name;
    this->acc_num = account_number;
    this->balance = balance;
    total_customer++;
  }

  void display()
  {
    cout << "name : " << name << endl;
    cout << "account number : " << acc_num << endl;
    cout << "balance : " << balance << endl;
    cout << "total customer : " << total_customer << endl;
    cout << endl;
  }
};

int Customer::total_customer = 0;

int main()
{
  Customer A1("Abhinav", 6004, 56465474);
  Customer A2("Mohit", 6008, 5646);
  Customer A3("Ajay", 6005, 565746);

  A1.display();
  A2.display();
  A3.display();

  return 0;
}





// * Static data function

#include <iostream>
using namespace std;

class Customer
{
  string name;
  int acc_num, balance;
  static int total_customer;
  static int total_balance;

public:
  Customer(string name, int account_number, int balance)
  {
    this->name = name;
    this->acc_num = account_number;
    this->balance = balance;
    total_customer++;
    total_balance += balance;
  }

  static void accessStatic()
  {
    cout << "total customer : " << total_customer << endl;
    cout << "total balance : " << total_balance << endl;
  }

  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
      total_balance += amount;
    }
  }

  void withdraw(int amount)
  {
    if (amount <= balance && amount > 0)
    {
      balance -= amount;
      total_balance -= amount;
    }
  }

  void display()
  {
    cout << "name : " << name << endl;
    cout << "account number : " << acc_num << endl;
    cout << "balance : " << balance << endl;
    cout << endl;
  }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
  Customer A1("Abhinav", 6004, 1000);
  Customer A2("Mohit", 6008, 2000);
  Customer A3("Ajay", 6005, 1000);

  A1.deposit(800);
  A1.withdraw(500);
  Customer::accessStatic();

  return 0;
}





// * Encapsulation :-

#include <iostream>
using namespace std;

class Customer
{
private:
  string name;
  int acc_num, balance, age;

public:
  Customer(string name, int account_number, int balance, int age)
  {
    this->name = name;
    this->acc_num = account_number;
    this->balance = balance;
    this->age = age;
  }

  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
    }
    else
    {
      cout << "Invalid ammount";
    }
  }

  void withdraw(int amount)
  {
    if (amount <= balance && amount > 0)
    {
      balance -= amount;
    }
  }

  void display()
  {
    cout << "name : " << name << endl;
    cout << "account number : " << acc_num << endl;
    cout << "balance : " << balance << endl;
    cout << endl;
  }
};

int main()
{
  Customer A1("Abhinav", 6004, 1000, 20);
  Customer A2("Mohit", 6008, 2000, 23);
  Customer A3("Ajay", 6005, 1000, 23);

  A1.deposit(-50);
  A1.display();

  return 0;
}





// * Abstraction :-

#include <iostream>
using namespace std;

class Customer
{
private:
  string name;
  int acc_num, balance, age;

public:
  Customer(string name, int account_number, int balance, int age)
  {
    this->name = name;
    this->acc_num = account_number;
    this->balance = balance;
    this->age = age;
  }

  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
    }
    else
    {
      cout << "Invalid ammount";
    }
  }

  void withdraw(int amount)
  {
    if (amount <= balance && amount > 0)
    {
      balance -= amount;
    }
  }

  void display()
  {
    cout << "name : " << name << endl;
    cout << "account number : " << acc_num << endl;
    cout << "balance : " << balance << endl;
    cout << endl;
  }
};

int main()
{
  Customer A1("Abhinav", 6004, 1000, 20);
  Customer A2("Mohit", 6008, 2000, 23);
  Customer A3("Ajay", 6005, 1000, 23);

  A1.deposit(-50);
  A1.display();

  return 0;
}