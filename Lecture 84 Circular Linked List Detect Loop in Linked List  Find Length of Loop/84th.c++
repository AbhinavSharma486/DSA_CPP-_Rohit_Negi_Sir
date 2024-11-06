// & Circular Linked List

// * How to make a circular singular linked list :-

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

Node *creatingSLL(int arr[], int index, int size, Node *head)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = creatingSLL(arr, index + 1, size, head);

  // ~ make it circular
  if (temp->next == NULL)
  {
    temp->next = head;
  }

  return temp;
}
void printingSLL(Node *head)
{
  Node *temp = head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  cout << endl;
}
int main()
{
  Node *head = NULL;
  int arr[] = {5, 10, 15, 20, 25};

  head = creatingSLL(arr, 0, 5, head);
  printingSLL(head);

  return 0;
}





// * How to make a circular doubly linked list :-

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

Node *creatingDLL(int arr[], int index, int size, Node *back, Node *head)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = creatingDLL(arr, index + 1, size, temp, head);

  // ~ make it circular
  if (temp->next == NULL)
  {
    temp->next = head;
  }

  return temp;
}

void printingDLL(Node *head)
{
  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  cout << endl;
}
int main()
{
  Node *head = NULL;

  int arr[] = {5, 10, 15, 20, 25};
  head = creatingDLL(arr, 0, 5, NULL, head);
  printingDLL(head);
  return 0;
}





// TODO : Problem 1 : Detect Loop in linked list :-

// & Method 1 :-

#include <iostream>
#include <vector>
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

// & Function to create a singly linked list :-
Node *creatingSLL(int arr[], int index, int size, Node *head, Node *fourthNode, Node *&tail)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);

  // & set head if it's the first node
  if (index == 0)
  {
    head = temp;
  }
  else
  {
    tail->next = temp;
  }

  // Save reference to the 4th node
  if (index == 3)
  {
    fourthNode = temp;
  }

  tail = temp; // ^ updating the tail

  temp->next = creatingSLL(arr, index + 1, size, head, fourthNode, tail);

  // ~ make it circular by linking the 10th node to the 4th node
  if (index == size - 1)
  {
    temp->next = fourthNode; // ^ last node points to head
  }

  return temp;
}

// ! Function to check if a node has been visited
bool check(vector<Node *> &visited, Node *curr)
{
  for (int i = 0; i < visited.size(); i++)
  {
    if (visited[i] == curr)
    {
      return 1;
    }
  }
  return 0;
}

// ^ Function to detect a loop in the linked list
bool detectLoop(Node *head)
{
  Node *curr = head;
  vector<Node *> visited;

  // & traverse the loop
  while (curr != NULL)
  {
    // ? node is already visited or not
    if (check(visited, curr))
    {
      cout << "Loop detected" << endl;
      return 1;
    }
    visited.push_back(curr);
    curr = curr->next;
  }
  cout << "No loop detected" << endl;
  return false;
}

void printingSLL(Node *head, int limit)
{
  Node *temp = head;
  int count = 0;

  while (temp && count < limit)
  {
    cout << temp->data << " ";
    temp = temp->next;
    count++;
  }

  cout << endl;
}
int main()
{
  Node *head = NULL;
  Node *fourthNode = NULL;
  Node *tail = NULL;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  head = creatingSLL(arr, 0, 10, head, fourthNode, tail);
  detectLoop(head);
  printingSLL(head, 12);

  return 0;
}



// & Method 2 :- Using Unordered Map

#include <iostream>
#include <unordered_map>
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
  + 6 [= -0]
};

// & Function to create a singly linked list :-
Node *creatingSLL(int arr[], int index, int size, Node *head, Node *fourthNode, Node *&tail)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);

  // & set head if it's the first node
  if (index == 0)
  {
    head = temp;
  }

  // & Save reference to the 4th node
  if (index == 3)
  {
    fourthNode = temp;
  }

  tail = temp; // ? updating the tail

  temp->next = creatingSLL(arr, index + 1, size, head, fourthNode, tail);

  // ~ make it circular by linking the 10th node to the 4th node
  if (index == size - 1)
  {
    temp->next = fourthNode; // ^ last node points to head
  }

  return temp;
}

// ^ Function to detect a loop in the linked list
bool detectLoop(Node *head)
{
  Node *curr = head;
  unordered_map<Node *, bool> visited;

  // & traverse the loop
  while (curr != NULL)
  {
    // ? node is already visited or not
    if (visited[curr] == 1)
    {
      cout << "Loop detected" << endl;
      return 1;
    }
    visited[curr] = 1;
    curr = curr->next;
  }
  cout << "No loop detected" << endl;
  return false;
}

void printingSLL(Node *head, int limit)
{
  Node *temp = head;
  int count = 0;

  while (temp && count < limit)
  {
    cout << temp->data << " ";
    temp = temp->next;
    count++;
  }

  cout << endl;
}
int main()
{
  Node *head = NULL;
  Node *fourthNode = NULL;
  Node *tail = NULL;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  head = creatingSLL(arr, 0, 10, head, fourthNode, tail);
  detectLoop(head);
  printingSLL(head, 12);

  return 0;
}



// & Method 3 : Using Slow & Fast Pointer approach :-

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

// & Function to create a singly linked list :-
Node *creatingSLL(int arr[], int index, int size, Node *head, Node *fourthNode, Node *&tail)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);

  // & set head if it's the first node
  if (index == 0)
  {
    head = temp;
  }

  // & save reference to the 4th node
  if (index == 3)
  {
    fourthNode = temp;
  }

  tail = temp; // ? updating the tail

  temp->next = creatingSLL(arr, index + 1, size, head, fourthNode, tail);

  // ~ make it circular by linking the 10th node to the 4th node
  if (index == size - 1)
  {
    temp->next = fourthNode; // ^ last node points to head
  }

  return temp;
}

// ^ Function to detect a loop in the linked list
bool detectLoop(Node *head)
{
  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
      cout << "Loop detected" << endl;
      return 1;
    }
  }
  cout << "No loop detected" << endl;

  return 0;
}

void printingSLL(Node *head, int limit)
{
  Node *temp = head;
  int count = 0;

  while (temp && count < limit)
  {
    cout << temp->data << " ";
    temp = temp->next;
    count++;
  }

  cout << endl;
}
int main()
{
  Node *head = NULL;
  Node *fourthNode = NULL;
  Node *tail = NULL;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  head = creatingSLL(arr, 0, 10, head, fourthNode, tail);
  detectLoop(head);
  printingSLL(head, 12);

  return 0;
}





// TODO : Problem 2 -> Find the length of the loop :-

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

// & Function to create a singly linked list :-
Node *creatingSLL(int arr[], int index, int size, Node *head, Node *fourthNode, Node *&tail)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);

  // & set head if it's the first node
  if (index == 0)
  {
    head = temp;
  }
  else
  {
    tail->next = temp;
  }

  // & save reference to the 4th node
  if (index == 3)
  {
    fourthNode = temp;
  }

  tail = temp; // ^ updating the tail

  temp->next = creatingSLL(arr, index + 1, size, head, fourthNode, tail);

  // ~ make it circular by linking the 10th node to the 4th node
  if (index == size - 1)
  {
    temp->next = fourthNode;
  }

  return temp;
}

// ^ Function to detect a loop in the linked list
int detectLoop(Node *head)
{
  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
      cout << "Loop detected" << endl;

      int count = 1;
      slow = slow->next;
      while (slow != fast)
      {
        count++;
        slow = slow->next;
      }

      return count;
    }
  }

  cout << "No loop detected" << endl;
  return 0;
}

void printingSLL(Node *head, int limit)
{
  Node *temp = head;
  int count = 0;

  while (temp && count < limit)
  {
    cout << temp->data << " ";
    temp = temp->next;
    count++;
  }

  cout << endl;
}
int main()
{
  Node *head = NULL;
  Node *fourthNode = NULL;
  Node *tail = NULL;

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  head = creatingSLL(arr, 0, 10, head, fourthNode, tail);
  int count = detectLoop(head);
  printingSLL(head, 12);
  cout << "Length of loop: " << count;

  return 0;
}
