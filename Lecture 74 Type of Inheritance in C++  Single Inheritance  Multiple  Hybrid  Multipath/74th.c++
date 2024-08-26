// * Single Inheritance :-

// & Example 1:-

#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age;

public:
  void work()
  {
    cout << "I am working";
  }
};

class Student : public Human
{
  int roll_number, fees;

public:
  Student(string name, int age, int roll_number, int fees)
  {
    this->name = name;
    this->age = age;
    this->roll_number = roll_number;
    this->fees = fees;
  }
};

int main()
{
  Student A1("Abhinav", 26, 6004, 17000);
  A1.work();
  return 0;
}




// & Example 2 : Constructor calling

#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age;

public:
  Human()
  {
    cout << "Hellow Human \n"; // ^ Pehle yeh run honga
  }
};

class Student : public Human
{
  int roll_number, fees;

public:
  Student()
  {
    cout << "Hellow student \n"; // ^ Then yeh vala run hoga
  }
};

int main()
{
  Student A1;
  return 0;
}




// & Example 3 : Destructor calling

#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age;

public:
  ~Human()
  {
    cout << "Hellow Human \n"; // ^ then yeh vala run honga
  }
};

class Student : public Human
{
  int roll_number, fees;

public:
  ~Student()
  {
    cout << "Hellow student \n"; // ^ Pehle yeh vala run hoga
  }
};

int main()
{
  Student A1;
  return 0;
}




// & Example 4 :-

#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age;

public:
  Human(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};

class Student : public Human
{
  int roll_number, fees;

public:
  Student(string name, int age, int roll_number, int fees) : Human(name, age)
  {
    this->roll_number = roll_number;
    this->fees = fees;
  }

  void display()
  {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "roll number : " << roll_number << endl;
    cout << "fees : " << fees << endl;
  }
};

int main()
{
  Student A1("Abhinav Sharma", 20, 6004, 17000);
  A1.display();
  return 0;
}





// * Multilevel inheritance :-

#include <iostream>
using namespace std;

class Person
{
protected:
  string name;
  int age;

public:
  void introduced()
  {
    cout << "hi! i am : " << name << endl;
    cout << "My age is : " << age << endl;
  }
};

class Employee : public Person
{
protected:
  int salary;

public:
  void monthly_salary()
  {
    cout << "My monthly salary is : " << salary << endl;
  }
};

class Manager : public Employee
{
public:
  string department;
  int no_of_employees_under;

  Manager(string name, int age, int salary, string department, int no_of_employees_under)
  {
    this->name = name;
    this->age = age;
    this->salary = salary;
    this->department = department;
    this->no_of_employees_under = no_of_employees_under;
  }

  void work()
  {
    cout << "I am leading the department : " << department << endl;
    cout << "No. of employees under me : " << no_of_employees_under << endl;
  }
};

int main()
{
  Manager A1("Abhinav Sharma", 20, 10000000, "software engineer", 8);
  A1.introduced();
  A1.monthly_salary();
  A1.work();
  return 0;
}





// * Multiple Inheritance :-

#include <iostream>
using namespace std;

class Engineer
{
public:
  string specialization;

  void work()
  {
    cout << "I have spacialization in : " << specialization << endl;
  }
};

class Youtuber
{
public:
  int subscribers;

  void contentcreator()
  {
    cout << "I have a subscriber base of : " << subscribers << endl;
  }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
  string name;

  CodeTeacher(string name, string specialization, int subscribers)
  {
    this->name = name;
    this->specialization = specialization;
    this->subscribers = subscribers;
  }

  void showCase()
  {
    cout << "I am : " << name << endl;
    work();
    contentcreator();
  }
};

int main()
{
  CodeTeacher A1("Abhinav Sharma", "CSE", 150000);
  A1.showCase();

  return 0;
}





// * Hierarchical Inheritance :-

#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age;

public:
  Human()
  {
  }

  Human(string name, int age)
  {
    this->name = name;
    this->age = age;
  }

  void display()
  {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
  }
};

class Student : public Human
{
  int roll_number, fees;

public:
  Student(string name, int age, int roll_number, int fees) : Human(name, age)
  {
    this->roll_number = roll_number;
    this->fees = fees;
  }

  void display()
  {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "roll number : " << roll_number << endl;
    cout << "fees : " << fees << endl;
  }
};

class Teacher : public Human
{
  int salary;

public:
  Teacher(int salary, string name, int age)
  {
    this->salary = salary;
    this->name = name;
    this->age = age;
  }

  void display()
  {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "salary : " << salary << endl;
  }
};

int main()
{
  Student A1("Abhinav", 20, 6004, 17000);

  A1.display();

  Teacher A2(1000000, "Rohit Negi", 26);

  A2.display();

  return 0;
}





// * Hybrid inheritance :-

#include <iostream>
using namespace std;

// ~ student
// ! boy
// ^ girl
// & male
// ? female

class Student
{
public:
  void print()
  {
    cout << "I am student" << endl;
  }
};

class Male
{
public:
  void Maleprint()
  {
    cout << "I am Male" << endl;
  }
};

class Female
{
public:
  void Femaleprint()
  {
    cout << "I am Female" << endl;
  }
};

class Boy : public Student, public Male
{
public:
  void Boyprint()
  {
    cout << "I am boy" << endl;
  }
};

class Girl : public Student, public Female
{
public:
  void Girlprint()
  {
    cout << "I am girl" << endl;
  }
};

int main()
{
  Girl G1;
  G1.Girlprint();
  G1.print();

  Boy B1;
  B1.Boyprint();
  B1.print();

  return 0;
}





// * Multipath Inheritance :-

#include <iostream>
using namespace std;

class Human
{
public:
  string name;

  void display()
  {
    cout << "My name is : " << name << endl;
  }
};

class Engineer : public virtual Human
{
public:
  string specialization;

  void work()
  {
    cout << "I have specialization in : " << specialization << endl;
  }
};

class Youtuber : public virtual Human
{
public:
  int subscribers;

  void contentcreator()
  {
    cout << "I have subscriber base of : " << subscribers << endl;
  }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
  int salary;

  CodeTeacher(string name, string specialization, int subscribers, int salary)
  {
    this->name = name;
    this->specialization = specialization;
    this->subscribers = subscribers;
    this->salary = salary;
  }
};

int main()
{
  CodeTeacher A1("Abhinav Sharma", "CSE", 150000, 10000000);
  A1.display();
  A1.work();
  A1.contentcreator();

  return 0;
}