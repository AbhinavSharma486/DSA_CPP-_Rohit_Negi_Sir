// * Deletion of first Node from linked list :-

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

Node *CreateLinkedList(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr, index + 1, size);
  return temp;
}

int main()
{
  Node *Head = NULL;
  +

      int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkedList(arr, 0, 5);

  // & Deletion of First Node
  if (Head != NULL)
  {
    Node *temp = Head;
    Head = Head->next;
    delete temp;
  }

  while (Head)
  {
    cout << Head->data << " ";
    Head = Head->next;
  }

  return 0;
}





// * Delete a Node at end :-

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

Node *CreateLinkedList(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr, index + 1, size);
  return temp;
}

int main()
{
  Node *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkedList(arr, 0, 2);

  // & Deletion a Node at end
  if (Head != NULL)
  {
    // ^ Only 1 node is present
    if (Head->next == NULL)
    {
      Node *temp = Head;
      delete temp;
      Head = NULL;
    }

    // ? more than 1 node is present
    else
    {
      Node *curr = Head;
      Node *prev = NULL;

      while (curr->next != NULL)
      {
        prev = curr;
        curr = curr->next;
      }

      prev->next = curr->next;
      delete curr;
    }
  }

  while (Head)
  {
    cout << Head->data << " ";
    Head = Head->next;
  }

  return 0;
}





// * Deletion of Node at Particular position in Linked List :-

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

Node *CreateLinkedList(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr, index + 1, size);
  return temp;
}

int main()
{
  Node *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkedList(arr, 0, 5);

  int x;
  cout << "Enter x : ";
  cin >> x;

  // & Deletion of Node at Particular Position
  if (x == 1)
  {
    Node *temp = Head;
    Head = Head->next;
    delete temp;
  }

  x--;
  Node *curr = Head;
  Node *prev = NULL;

  while (x--)
  {
    prev = curr;
    curr = curr->next;
  }

  prev->next = curr->next;
  delete curr;

  while (Head)
  {
    cout << Head->data << " ";
    Head = Head->next;
  }

  return 0;
}





// * Deletion of particular node using recursion in linkedlist :-

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

Node *CreateLinkedList(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr, index + 1, size);
  return temp;
}

Node *deleteNode(Node *curr, int x)
{
  if (x == 1)
  {
    Node *temp = curr->next;
    delete curr;
    return temp;
  }

  curr->next = deleteNode(curr->next, x - 1);
  return curr;
}

int main()
{
  Node *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkedList(arr, 0, 5);

  int x;
  cout << "Enter x : ";
  cin >> x;

  Head = deleteNode(Head, x);

  while (Head)
  {
    cout << Head->data << " ";
    Head = Head->next;
  }

  return 0;
}





// * Deletion of Node without using head pointer

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

Node *CreateLinkedList(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr, index + 1, size);
  return temp;
}

Node *deleteNode(Node *curr)
{
  Node *temp = curr->next;
  curr->data = temp->data;
  curr->next = temp->next;
  delete temp;
}

int main()
{
  Node *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkedList(arr, 0, 5);

  int x;
  cout << "Enter x : ";
  cin >> x;

  Head = deleteNode(Head);

  while (Head)
  {
    cout << Head->data << " ";
    Head = Head->next;
  }

  return 0;
}
