// * Example of Function overloading :-

// #include <iostream>
// using namespace std;

// class Area
// {
// public:
//   int calculateArea(int r) // circle
//   {
//     return 3.14 * r * r;
//   }

//   int calculateArea(int l, int b) // rectange
//   {
//     return l * b;
//   }
// };

// int main()
// {
//   Area A1, A2;
//   cout << A1.calculateArea(4) << endl;
//   cout << A2.calculateArea(3, 4) << endl;

//   return 0;
// }

// * Example of Operator Overloading :-

// #include <iostream>
// using namespace std;

// class Complex
// {
//   int real, img;

// public:
//   Complex()
//   {
//   }

//   Complex(int real, int img)
//   {
//     this->real = real;
//     this->img = img;
//   }

//   void display()
//   {
//     cout << real << " + i" << img;
//   }

//   Complex operator+(Complex &C)
//   {
//     Complex ans;

//     ans.real = real + C.real;
//     ans.img = img + C.img;

//     return ans;
//   }
// };

// int main()
// {
//   Complex C1(3, 2);
//   Complex C2(4, 6);

//   Complex C3 = C1 + C2;

//   C3.display();

//   return 0;
// }

// * Example of Virtual function :-

// & Example 1:-

// #include <iostream>
// #include <vector>
// using namespace std;

// class Animal
// {
// public:
//   virtual void speak()
//   {
//     cout << "hu hu" << endl;
//   }
// };

// class Dog : public Animal
// {
// public:
//   void speak()
//   {
//     cout << "bark" << endl;
//   }
// };

// class Cat : public Animal
// {
// public:
//   void speak()
//   {
//     cout << "Meow" << endl;
//   }
// };

// int main()
// {
//   Animal *p;
//   p = new Dog();
//   p->speak();

//   Dog d1;
//   d1.speak();

//   return 0;
// }

// & Example 2:-

// #include <iostream>
// #include <vector>
// using namespace std;

// class Animal
// {
// public:
//   virtual void speak()
//   {
//     cout << "hu hu" << endl;
//   }
// };

// class Dog : public Animal
// {
// public:
//   void speak()
//   {
//     cout << "bark" << endl;
//   }
// };

// class Cat : public Animal
// {
// public:
//   void speak()
//   {
//     cout << "Meow" << endl;
//   }
// };

// int main()
// {
//   Animal *p;
//   vector<Animal *> animals;
//   animals.push_back(new Dog());
//   animals.push_back(new Cat());
//   animals.push_back(new Animal());
//   animals.push_back(new Dog());
//   animals.push_back(new Cat());

//   for (int i = 0; i < animals.size(); i++)
//   {
//     p = animals[i];
//     p->speak();
//   }

//   return 0;
// }

// * Pure virtual function (Abstract class) :-

#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
  virtual void speak() = 0; // pure virtual function
};

class Dog : public Animal
{
public:
  void speak()
  {
    cout << "bark" << endl;
  }
};

class Cat : public Animal
{
public:
  void speak()
  {
    cout << "Meow" << endl;
  }
};

int main()
{
  Animal *p;
  vector<Animal *> animals;
  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Animal());
  animals.push_back(new Dog());
  animals.push_back(new Cat());

  for (int i = 0; i < animals.size(); i++)
  {
    p = animals[i];
    p->speak();
  }

  return 0;
}