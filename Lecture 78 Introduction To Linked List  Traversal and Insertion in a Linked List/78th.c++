// * Creating Linkedlist :-

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

int main()
{
  // Node A1(4); // ^ Way 1 to create a object of Node

  Node *Head;
  Head = new Node(4); // ^ Dynamically to create a Node
  cout << "Head at : " << Head->data << endl;
  cout << "Null : " << Head->next << endl;

  return 0;
}





// * Insertion on linkedlist at start :-

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

int main()
{
  Node *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  // ~ Insert the Node at Beginning

  for (int i = 0; i < 5; i++)
  {
    // ! Linked List doesn't exist
    if (Head == NULL)
    {
      Head = new Node(arr[i]);
    }

    // ? Linked List already exist
    else
    {
      Node *temp;
      temp = new Node(arr[i]);
      temp->next = Head;
      Head = temp;
    }
  }

  // ^ Printing the values
  Node *temp = Head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}





// * Insertion on linkedlist from end :-

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

int main()
{
  Node *Head = NULL, *Tail = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  // ^ Inserting the value at end

  for (int i = 0; i < 5; i++)
  {
    // & Linked list is empty
    if (Head == NULL)
    {
      Head = new Node(arr[i]);
      Tail = Head;
    }

    // ? Linked list exist karti hai
    else
    {
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  Node *temp = Head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}





// * Creating Linked list using Recursion & adding Node at end :-

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

Node *CreateLinkdList(int arr[], int index, int size)
{
  // base case
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkdList(arr, index + 1, size);
  return temp;
}

int main()
{
  Node *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkdList(arr, 0, 5);

  Node *temp = Head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}





// * Creating Linked list using Recursion & adding Node at Beginning :-

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

Node *CreateLinkdList(int arr[], int index, int size, Node *prev)
{
  // base case
  if (index == size)
  {
    return prev;
  }

  Node *temp = new Node(arr[index]);
  temp->next = prev;

  return CreateLinkdList(arr, index + 1, size, temp);
}

int main()
{
  Node *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkdList(arr, 0, 5, Head);

  Node *temp = Head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}





// * Insertion at Particular Position on Linked List  :-

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

Node *CreateLinkdList(int arr[], int index, int size)
{
  // base case
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkdList(arr, index + 1, size);
  return temp;
}

int main()
{
  Node *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkdList(arr, 0, 5);

  int x = 3;      // Node has to be inserted at this position
  int value = 30; // vlaue to be inserted

  Node *temp = Head;
  x--;

  while (x--)
  {
    temp = temp->next;
  }

  Node *temp2 = new Node(value);
  temp2->next = temp->next;
  temp->next = temp2;

  temp = Head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}
