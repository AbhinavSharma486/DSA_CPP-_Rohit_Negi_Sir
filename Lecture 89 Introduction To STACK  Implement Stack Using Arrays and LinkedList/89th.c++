// ~ Implementation on Stack using Array :-

#include <iostream>
using namespace std;

class Stack
{
  int *arr;
  int size;
  int top;

public:
  // constructor
  Stack(int s)
  {
    size = s;
    top = -1;
    arr = new int[s];
  }

  // PUSH Operation
  void push(int value)
  {
    if (top == size - 1)
    {
      cout << "Stack Overflow" << endl;
      return;
    }
    else
    {
      top++;
      arr[top] = value;
      cout << "Pushed " << value << " into the stack" << endl;
    }
  }

  // POP Operation
  void pop()
  {
    if (top == -1)
    {
      cout << "Stack Underflow" << endl;
    }
    else
    {
      cout << "Pop " << arr[top] << " from the stack" << endl;
      top--;
    }
  }

  // PEEK Operation
  int peek()
  {
    if (top == -1)
    {
      cout << "Stack is Empty" << endl;
      return -1;
    }
    else
    {
      cout << "Peek element : " << arr[top] << endl;
    }
  }

  // IsEmpty Operation
  bool IsEmpty()
  {
    if (top == -1)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  // IsSize Operation
  int IsSize()
  {
    cout << "Size of stack : " << top + 1 << endl;
  }
};

int main()
{
  Stack s(5);

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  s.peek();
  s.IsSize();

  s.push(-1);
  s.pop();
  s.peek();

  return 0;
}

// ----------------------------------------------------------------------------

// ! Implementation on Stack using linked list :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

class Stack
{
  Node *top;
  int size;

public:
  Stack()
  {
    top = NULL;
    size = 0;
  }

  // push
  void push(int value)
  {
    Node *temp = new Node(value);
    if (temp == NULL)
    {
      cout << "Stack Overflow" << endl;
      return;
    }
    else
    {
      temp->next = top;
      top = temp;
      size++;
      cout << "Pushed " << value << " into the stack" << endl;
    }
  }
  // pop
  void pop()
  {
    if (top == NULL)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    else
    {
      Node *temp = top;
      cout << "Popped " << top->data << " from the stack" << endl;
      top = top->next;
      delete temp;
      size--;
    }
  }
  // peek
  void peek()
  {
    if (top == NULL)
    {
      cout << "Stack is empty" << endl;
      return;
    }
    else
    {
      cout << "Peek value : " << top->data << endl;
    }
  }
  // isEmpty
  bool isEmpty()
  {
    if (top == NULL)
    {
      cout << "Stack is Empty" << endl;
    }
    else
    {
      cout << "Not Empty" << endl;
    }
  }
  // isSize
  int isSize()
  {
    cout << "Stack size : " << size << endl;
  }
};

int main()
{
  Stack s;
  s.push(6);
  s.push(16);
  s.push(62);
  s.push(86);
  s.pop();
  s.isSize();
  s.peek();
  s.isEmpty();

  return 0;
}

// ----------------------------------------------------------------------------

// ^ Implementation on stack using STL

#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);

  // size
  cout << "Stack size : " << s.size() << endl;

  // top
  cout << "Value on top of stack : " << s.top() << endl;

  // pop
  s.pop();

  // empty
  cout << s.empty() << endl;
}