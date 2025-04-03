// TODO : Implement queue using array :-

#include <iostream>
using namespace std;

class Queue
{
  int *arr;
  int front, rear, size;

public:
  // Constructor
  Queue(int n)
  {
    arr = new int[n];
    front = rear = -1;
    size = n;
  }

  // If queue is empty or not
  bool IsEmpty()
  {
    return front == -1;
  }

  // Queue is full or not
  bool IsFull()
  {
    return rear == size - 1;
  }

  // push element in queue
  void push(int x)
  {
    // Empty
    if (IsEmpty())
    {
      front = rear = 0;
      arr[0] = x;
      cout << "Pushed " << x << " into the queue" << endl;
    }

    // full
    else if (IsFull())
    {
      cout << "Queue is Overflow" << endl;
      return;
    }

    // insert
    else
    {
      rear = rear + 1;
      arr[rear] = x;
      cout << "Pushed " << x << " into the queue" << endl;
    }
  }

  // pop element
  void pop()
  {
    // Empty
    if (IsEmpty())
    {
      cout << "Queue is Underflow" << endl;
      return;
    }

    // pop kr do
    else
    {
      if (front == rear)
      {
        cout << "Popped " << arr[front] << " from the queue" << endl;
        front = rear = -1;
      }
      else
      {
        cout << "Popped " << arr[front] << " from the queue" << endl;
        front = front + 1;
      }
    }
  }

  // start me konsa element rakha hai
  int start()
  {
    // Empty
    if (IsEmpty())
    {
      cout << "Queue is Empty" << endl;
      return -1;
    }
    else
    {
      cout << "Start element is " << arr[front] << endl;
    }
  }
};

int main()
{
  Queue q(5);
  q.push(5);
  q.push(15);
  q.push(25);
  q.pop();
  q.pop();
  q.pop();
  q.start();
}

// TODO : Implement queue using circular array :-

#include <iostream>
using namespace std;

class Queue
{
  int *arr;
  int front, rear, size;

public:
  // Constructor
  Queue(int n)
  {
    arr = new int[n];
    front = rear = -1;
    size = n;
  }

  // If queue is empty or not
  bool IsEmpty()
  {
    return front == -1;
  }

  // Queue is full or not
  bool IsFull()
  {
    return front == (rear + 1) % size;
  }

  // push element in queue
  void push(int x)
  {
    // Empty
    if (IsEmpty())
    {
      front = rear = 0;
      arr[0] = x;
      cout << "Pushed " << x << " into the queue" << endl;
    }

    // full
    else if (IsFull())
    {
      cout << "Queue is Overflow" << endl;
      return;
    }

    // insert
    else
    {
      rear = (rear + 1) % size;
      arr[rear] = x;
      cout << "Pushed " << x << " into the queue" << endl;
    }
  }

  // pop element
  void pop()
  {
    // Empty
    if (IsEmpty())
    {
      cout << "Queue is Underflow" << endl;
      return;
    }

    // pop kr do
    else
    {
      if (front == rear)
      {
        cout << "Popped " << arr[front] << " from the queue" << endl;
        front = rear = -1;
      }
      else
      {
        cout << "Popped " << arr[front] << " from the queue" << endl;
        front = (front + 1) % size;
      }
    }
  }

  // start me konsa element rakha hai
  int start()
  {
    // Empty
    if (IsEmpty())
    {
      cout << "Queue is Empty" << endl;
      return -1;
    }
    else
    {
      cout << "Start element is " << arr[front] << endl;
    }
  }
};

int main()
{
  Queue q(5);
  q.push(5);
  q.push(15);
  q.push(51);
  q.push(125);
  q.pop();
  q.push(511);
  q.push(38);
  q.pop();
  q.start();
}

// TODO :- Implement Queue using Linked list

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

class Queue
{
  Node *front;
  Node *rear;

public:
  Queue()
  {
    front = rear = NULL;
  }

  bool IsEmpty()
  {
    return front == NULL;
  }

  void push(int x)
  {
    if (IsEmpty())
    {
      cout << "Pushed " << x << " into the queue" << endl;
      front = rear = new Node(x);
      return;
    }
    else
    {
      cout << "Pushed " << x << " into the queue" << endl;
      rear->next = new Node(x);
      rear = rear->next;
    }
  }

  void pop()
  {
    if (IsEmpty())
    {
      cout << "Queue Underflow";
      return;
    }
    else
    {
      cout << "Popped " << front->data << " from the queue" << endl;
      Node *temp = front;
      front = front->next;
      delete temp;
    }
  }

  int start()
  {
    if (IsEmpty())
    {
      cout << "Queue is empty";
      return -1;
    }
    else
    {
      cout << "Queue start value : " << front->data << endl;
    }
  }
};

int main()
{
  Queue q;
  q.push(5);
  q.push(15);
  q.push(51);
  q.push(125);
  q.pop();
  q.push(511);
  q.push(38);
  q.pop();
  q.start();
}

// TODO :- Implement Queue using STL(Standart Template Library)

#include <iostream>
#include <queue>
using namespace std;
int main()
{
  // how to create a queue
  queue<int> q;

  // push element into the queue
  q.push(10);
  q.push(40);
  q.push(123);

  // delete element
  q.pop();

  // front element
  cout << "Queue Front element : " << q.front() << endl;

  // size of queue
  cout << "Queue size : " << q.size() << endl;

  // last element
  cout << "Queue last : " << q.back() << endl;

  // queue is empty or not
  cout << "Queue is empty : " << q.empty() << endl;
}