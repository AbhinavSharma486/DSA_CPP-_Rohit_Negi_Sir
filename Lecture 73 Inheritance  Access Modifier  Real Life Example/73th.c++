// * Inheritance :-

// & Public , Protected & Private access modifier in Externel code

#include <iostream>
using namespace std;

class Human
{
private:
  int a;

protected:
  int b;

public:
  int c;
};

int main()
{
  Human Abhinav;
  // Abhinav.a = 10; // ! Acces not allowed
  // Abhinav.b = 10; // ! Acces not allowed
  Abhinav.c = 10; // * Access Allowed

  return 0;
}




// & Public , Protected & Private access modifier within the class

#include <iostream>
using namespace std;

class Human
{
private:
  int a;

protected:
  int b;

public:
  int c;

  void fun() // * Access Allowed
  {
    a = 10;
    b = 20;
    c = 30;
  }
};

int main()
{
  Human Abhinav;
  Abhinav.fun(); // * Access Allowed

  return 0;
}




// & Derived class :-

#include <iostream>
using namespace std;

class Human
{

  string name;
  int age, weight;
};

class Student : public Human
{
  int roll_number, fees;
};

int main()
{
  Student A;
  // A.name = "abhinav"; // ! Access not allowed in case of private and protected in both class

  return 0;
}