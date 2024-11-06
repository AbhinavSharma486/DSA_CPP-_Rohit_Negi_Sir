// * Operations on Doubly Linked List :-

// * Insertion at Starting on Doubly Linked List :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;

  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};
int main()
{
  Node *head = NULL;

  // ^ Insertion at Start

  // ! Linked List doesn't exist
  if (head == NULL)
  {
    head = new Node(5);
  }
  // & Already exists
  else
  {
    Node *temp = new Node(5);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }

  Node *trav = head;
  while (trav)
  {
    cout << trav->data << " ";
    trav = trav->next;
  }
  return 0;
}





// * Insertion at end on Doubly Linked List :-

// & Method 1:-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(Node *&head, int value)
{
  Node *newNode = new Node(value);

  // If the list is empty, the new node becomes the head
  if (head == NULL)
  {
    head = newNode;
    return;
  }

  // Traverse to the last node
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  // Insert the new node at the end
  temp->next = newNode;
  newNode->prev = temp;
}

int main()
{
  Node *head = NULL;

  // Insert nodes at the end
  insertAtEnd(head, 5);
  insertAtEnd(head, 10);
  insertAtEnd(head, 15);

  // Traversing the list to display the elements
  Node *trav = head;
  while (trav)
  {
    cout << trav->data << " ";
    trav = trav->next;
  }

  return 0;
}



// & Method 2 :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};
int main()
{
  Node *head = NULL;

  // ~ Insert at end :-
  // ^ Linked List doesn't exist
  if (head == NULL)
  {
    head = new Node(10);
  }
  // & Linked List exist
  else
  {
    Node *curr = head;
    while (curr->next)
    {
      curr = curr->next;
    }

    Node *temp = new Node(10);
    curr->next = temp;
    temp->prev = curr;
  }

  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}





// * How to convert Array into Doubly Linked List :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};
int main()
{
  Node *head = NULL, *tail = NULL;

  // ~ Creating Doubly Linked List :-
  int arr[] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
  {
    // & Linked List doesn't exist
    if (head == NULL)
    {
      head = new Node(arr[i]);
      tail = head;
    }
    // ^ Linked List Exists
    else
    {
      Node *temp = new Node(arr[i]);
      tail->next = temp;
      temp->prev = tail;
      tail = temp;
    }
  }

  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}





// * How to create Doubly Linked List using recursion :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

Node *CreateDoublyLinkedList(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  // ^ Node Create kro
  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = CreateDoublyLinkedList(arr, index + 1, size, temp);

  return temp;
}

int main()
{
  Node *head = NULL, *tail = NULL;

  // ~ Creating Doubly Linked List :-
  int arr[] = {1, 2, 3, 4, 5};

  head = CreateDoublyLinkedList(arr, 0, 5, NULL);

  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}





// * Insertion of Node at any position on Doubly Linked List :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

Node *CreateDoublyLinkedList(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  // ^ Node Create kro
  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = CreateDoublyLinkedList(arr, index + 1, size, temp);

  return temp;
}

int main()
{
  Node *head = NULL, *tail = NULL;

  // ~ Creating Doubly Linked List :-
  int arr[] = {1, 2, 3, 4, 5};

  head = CreateDoublyLinkedList(arr, 0, 5, NULL);

  // & Insertion of Node at any position on Doubly Linked List
  int pos = 0;

  // ^ insert at start
  if (pos == 0)
  {
    // ~ Linked List exist na kre
    if (head == NULL)
    {
      head = new Node(5);
    }
    // ? Exist kre
    else
    {
      Node *temp = new Node(5);
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
  }

  else
  {
    Node *curr = head;
    // ! Go to the node, after which i have to insert
    while (--pos)
    {
      curr = curr->next;
    }
    // ^ insert at end
    if (curr->next == NULL) // & Last Node
    {
      Node *temp = new Node(5);
      temp->prev = curr;
      curr->next = temp;
    }
    // ^ insert at middle
    else
    {
      Node *temp = new Node(5);
      temp->next = curr->next;
      temp->prev = curr;
      curr->next = temp;
      temp->next->prev = temp;
    }
  }

  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}





// * Deletion at Start on Doubly Linked List :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

Node *CreateDoublyLinkedList(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  // ^ Node Create kro
  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = CreateDoublyLinkedList(arr, index + 1, size, temp);

  return temp;
}

int main()
{
  Node *head = NULL, *tail = NULL;

  // ~ Creating Doubly Linked List :-
  int arr[] = {1, 2, 3, 4, 5};

  head = CreateDoublyLinkedList(arr, 0, 5, NULL);

  // & Deletion at Start on Doubly Linked List
  if (head != NULL)
  {
    Node *temp = head;
    head = head->next;
    delete temp;

    if (head)
    {
      head->prev = NULL;
    }
  }

  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}





// * Deletion at End on Doubly Linked List :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

Node *CreateDoublyLinkedList(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  // ^ Node Create kro
  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = CreateDoublyLinkedList(arr, index + 1, size, temp);

  return temp;
}

int main()
{
  Node *head = NULL, *tail = NULL;

  // ~ Creating Doubly Linked List :-
  int arr[] = {1, 2, 3, 4, 5};

  head = CreateDoublyLinkedList(arr, 0, 5, NULL);

  // & Deletion at end on Doubly Linked List
  if (head != NULL)
  {
    if (head->next == NULL)
    {
      delete head;
      head = NULL;
    }
    else
    {
      Node *curr = head;
      while (curr->next)
      {
        curr = curr->next;
      }

      curr->prev->next = NULL;

      delete curr;
    }
  }

  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}





// * Deletion at any point on linked list :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

Node *CreateDoublyLinkedList(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  // ^ Node Create kro
  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = CreateDoublyLinkedList(arr, index + 1, size, temp);

  return temp;
}

int main()
{
  Node *head = NULL;

  // ~ Creating Doubly Linked List :-
  int arr[] = {1, 2, 3, 4, 5};

  head = CreateDoublyLinkedList(arr, 0, 5, NULL);

  // & Deletion at any point on Doubly Linked List
  int pos = 3;

  // ^ delete at start
  if (pos == 1)
  {
    if (head->next == NULL)
    {
      delete head;
      head = NULL;
    }
    // & If more than 1 node exists
    else
    {
      Node *temp = head;
      head = head->next;
      delete temp;
      head->prev = NULL;
    }
  }
  else
  {
    Node *curr = head;

    while (--pos)
    {
      curr = curr->next;
    }

    // ^ delete at end
    if (curr->next == NULL)
    {
      curr->prev->next = NULL;
      delete curr;
    }
    else
    // ~ delete at middle
    {
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
      delete curr;
    }
  }

  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}