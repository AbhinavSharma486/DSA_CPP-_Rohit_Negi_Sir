// * OPP's (Object oriented programming) :-

// & Example :-

// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//   string name;
//   int age, roll_number;
//   string grade;
// };
// int main()
// {
//   Student s1;

//   s1.name = "Abhinav";
//   s1.age = 10;
//   s1.grade = "A++";
//   s1.roll_number = 6004;

//   cout << "name : " << s1.name << endl;
//   cout << "age : " << s1.age << endl;
//   cout << "grade : " << s1.grade << endl;
//   cout << "roll_number : " << s1.roll_number << endl;

//   cout << endl;

//   Student s2;

//   s2.name = "Ajay";
//   s2.age = 15;
//   s2.grade = "A";
//   s2.roll_number = 6005;

//   cout << "name : " << s2.name << endl;
//   cout << "age : " << s2.age << endl;
//   cout << "grade : " << s2.grade << endl;
//   cout << "roll_number : " << s2.roll_number << endl;

//   cout << endl;

//   Student s3;

//   s3.name = "Deepti";
//   s3.age = 11;
//   s3.grade = "A+";
//   s3.roll_number = 600524;

//   cout << "name : " << s3.name << endl;
//   cout << "age : " << s3.age << endl;
//   cout << "grade : " << s3.grade << endl;
//   cout << "roll_number : " << s3.roll_number << endl;
// }

// & Getter and setter functions :-

// #include <iostream>
// using namespace std;
// class Student
// {
// private:
//   string name;
//   int age, roll_number;
//   string grade;

// public:
//   void setName(string n)
//   {
//     if (n.size() == 0)
//     {
//       cout << "Invalid name" << endl;
//     }

//     name = n;
//   }
//   void setAge(int a)
//   {
//     if (age > 0 || age < 100)
//     {
//       cout << "Invalid age" << endl;
//     }

//     age = a;
//   }
//   void setRollNumber(int r)
//   {
//     roll_number = r;
//   }
//   void setGrade(string g)
//   {
//     grade = g;
//   }

//   // ~ Printing function
//   void getName()
//   {
//     cout << " name : " << name << endl;
//   }

//   void getAge()
//   {
//     cout << " age : " << age << endl;
//   }

//   void getRollNumber()
//   {
//     cout << " roll number : " << roll_number << endl;
//   }

//   void getGrade()
//   {
//     cout << " grade : " << grade << endl;
//   }
// };
// int main()
// {
//   Student s1;

//   s1.setName("");
//   s1.setAge(-10);
//   s1.setGrade("A++");
//   s1.setRollNumber(6004);

//   s1.getName();
//   s1.getAge();
//   s1.getRollNumber();
//   s1.getGrade();

//   return 0;
// }

// & Size of object :-

// #include <iostream>
// using namespace std;

// class a
// {
//   int b;
//   int c;
//   int d;
//   char cd;
// };

// int main()
// {
//   a obj;
//   cout << sizeof(obj) << " ";
//   return 0;
// }

// & Padding concept :-

// ^ Giving size in output is 12

// #include <iostream>
// using namespace std;

// class a
// {
//   char c;
//   int b;
//   char d;
// };

// int main()
// {
//   a obj;
//   cout << sizeof(obj) << " ";
//   return 0;
// }

// ^ Giving size in output is 8

// #include <iostream>
// using namespace std;

// class a
// {
//   char c;
//   char d;
//   int b;
// };

// int main()
// {
//   a obj;
//   cout << sizeof(obj) << " ";
//   return 0;
// }

// ^ Giving size in output is 16

// #include <iostream>
// using namespace std;

// class a
// {
//   char c;
//   char d;
//   int b;
//   double e;
// };

// int main()
// {
//   a obj;
//   cout << sizeof(obj) << " ";
//   return 0;
// }

// ^ Giving size in output is 24

// #include <iostream>
// using namespace std;

// class a
// {
//   char c;
//   int b;
//   char d;
//   double e;
// };

// int main()
// {
//   a obj;
//   cout << sizeof(obj) << " ";
//   return 0;
// }

// & Dynamic Memory Allocation in OPP's :-

#include <iostream>
using namespace std;

class Student
{
public:
  string name;
  int age, roll_number;
  string grade;
};

int main()
{
  Student *S = new Student;
  (*S).name = "Abhinav";
  (*S).age = 20;
  (*S).roll_number = 6004;
  (*S).grade = "A++";

  cout << "name : " << S->name << " " << endl;
  cout << "age : " << S->age << " " << endl;
  cout << "roll number : " << S->roll_number << " " << endl;
  cout << "grade : " << S->grade << " " << endl;
}
