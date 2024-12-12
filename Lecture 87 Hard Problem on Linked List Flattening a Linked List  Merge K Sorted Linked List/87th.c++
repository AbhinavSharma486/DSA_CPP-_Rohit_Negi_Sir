// TODO : Problem 1 :- Flattening a linked list :-

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *bottom;

  Node(int value)
  {
    data = value;
    next = NULL;
    bottom = NULL;
  }
};

// & Function to create a linked list with bottom pointers
Node *createList(int arr[], int size)
{
  Node *head = new Node(arr[0]);
  Node *current = head;

  for (int i = 1; i < size; i++)
  {
    current->bottom = new Node(arr[i]);
    current = current->bottom;
  }
  return head;
}

Node *merge(Node *head1, Node *head2)
{
  Node *head = new Node(0);
  Node *tail = head;

  while (head1 && head2)
  {
    if (head1->data <= head2->data)
    {
      tail->bottom = head1;
      head1 = head1->bottom;
      tail = tail->bottom;
      tail->bottom = NULL;
    }
    else
    {
      tail->bottom = head2;
      head2 = head2->bottom;
      tail = tail->bottom;
      tail->bottom = NULL;
    }
  }

  // & remaining element attaching
  if (head1)
  {
    tail->bottom = head1;
  }
  else
  {
    tail->bottom = head2;
  }

  return head->bottom;
}

Node *flatten(Node *root)
{
  Node *head1, *head2, *head3;

  while (root->next)
  {
    head1 = root;
    head2 = root->next;
    head3 = root->next->next;

    head1->next = NULL;
    head2->next = NULL;

    root = merge(head1, head2);

    root->next = head3;
  }

  return root;
}

void printLinkedList(Node *head)
{
  Node *row = head;
  while (row)
  {
    Node *col = row;
    while (col)
    {
      cout << col->data << " ";
      col = col->bottom;
    }
    cout << endl;
    row = row->next;
  }
}

int main()
{
  // ^ Setting up the linked list as shown in the diagram

  // Row1
  int arr1[] = {5, 7, 8, 30};
  Node *head = createList(arr1, 4);

  // Row 2
  int arr2[] = {10, 20, 40};
  head->next = createList(arr2, 3);

  // Row 3
  int arr3[] = {19, 22, 50};
  head->next->next = createList(arr3, 3);

  // Row 4
  int arr4[] = {28, 35, 40, 45};
  head->next->next->next = createList(arr4, 4);

  // Row 5
  int arr5[] = {30, 34, 40};
  head->next->next->next->next = createList(arr5, 3);

  cout << "Linked list structure before combining:" << endl;
  printLinkedList(head);

  Node *flattenedLinkedList = flatten(head);

  cout << endl;

  cout << "Linked list after combining all rows into one bottom-linked list:" << endl;
  printLinkedList(flattenedLinkedList);

  return 0;
}





// TODO : Problem 2 :- Merge K Sorted Linked List :-

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

// & Function to create a linked list with next pointer
Node *createList(int arr[], int size)
{
  Node *head = new Node(arr[0]);
  Node *current = head;

  for (int i = 1; i < size; i++)
  {
    current->next = new Node(arr[i]);
    current = current->next;
  }
  return head;
}

// & Function to merge two sorted linked lists
Node *merge(Node *head1, Node *head2)
{
  Node *head = new Node(0);
  Node *tail = head;

  while (head1 && head2)
  {
    if (head1->data <= head2->data)
    {
      tail->next = head1;
      head1 = head1->next;
      tail = tail->next;
      tail->next = NULL;
    }
    else
    {
      tail->next = head2;
      head2 = head2->next;
      tail = tail->next;
      tail->next = NULL;
    }
  }

  // & remaining element attaching
  if (head1)
  {
    tail->next = head1;
  }
  else
  {
    tail->next = head2;
  }

  return head->next;
}

// ! Function to merge k sorted linked lists
Node *mergeKLists(vector<Node *> &lists, int k)
{
  if (lists.empty())
  {
    return NULL;
  }

  Node *head = lists[0];

  for (int i = 1; i < k; i++)
  {
    head = merge(head, lists[i]);
  }

  return head;
}

void printLinkedList(Node *head)
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
  // ^ Setting up the linked list as shown in the diagram

  int k = 8;

  // List 1
  int arr1[] = {1, 2, 4};
  Node *head1 = createList(arr1, 3);

  // List 2
  int arr2[] = {3, 6};
  Node *head2 = createList(arr2, 2);

  // List 3
  int arr3[] = {4, 5, 9, 10};
  Node *head3 = createList(arr3, 4);

  // List 4
  int arr4[] = {7};
  Node *head4 = createList(arr4, 1);

  // List 5
  int arr5[] = {6, 8};
  Node *head5 = createList(arr5, 2);

  // List 6
  int arr6[] = {2, 7, 8, 10};
  Node *head6 = createList(arr6, 4);

  // List 7
  int arr7[] = {17, 19, 22};
  Node *head7 = createList(arr7, 3);

  // List 8
  int arr8[] = {4, 18};
  Node *head8 = createList(arr8, 2);

  cout << "Linked list structure before combining:" << endl;
  printLinkedList(head1);
  printLinkedList(head2);
  printLinkedList(head3);
  printLinkedList(head4);
  printLinkedList(head5);
  printLinkedList(head6);
  printLinkedList(head7);
  printLinkedList(head8);

  // ^ Store the starting nodes in an array
  vector<Node *> lists = {head1, head2, head3, head4, head5, head6, head7, head8};

  // & merge all lists into one
  Node *mergedList = mergeKLists(lists, k);

  cout << endl;

  cout << "Merged Linked List : " << endl;
  printLinkedList(mergedList);

  return 0;
}



// & Method 2 : Using merge sort approach :-

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

// & Function to create a linked list with next pointer
Node *createList(int arr[], int size)
{
  Node *head = new Node(arr[0]);
  Node *current = head;

  for (int i = 1; i < size; i++)
  {
    current->next = new Node(arr[i]);
    current = current->next;
  }
  return head;
}

// & Function to merge two sorted linked lists
Node *merge(Node *head1, Node *head2)
{
  Node *head = new Node(0);
  Node *tail = head;

  while (head1 && head2)
  {
    if (head1->data <= head2->data)
    {
      tail->next = head1;
      head1 = head1->next;
      tail = tail->next;
      tail->next = NULL;
    }
    else
    {
      tail->next = head2;
      head2 = head2->next;
      tail = tail->next;
      tail->next = NULL;
    }
  }

  // & remaining element attaching
  if (head1)
  {
    tail->next = head1;
  }
  else
  {
    tail->next = head2;
  }

  return head->next;
}

void mergesort(vector<Node *> lists, int start, int end)
{
  if (start >= end)
  {
    return;
  }

  int mid = start + (end - start) / 2;
  // left part
  mergesort(lists, start, mid);
  // right part
  mergesort(lists, mid + 1, end);

  lists[start] = merge(lists[start], lists[mid + 1]);
}

// ! Function to merge k sorted linked lists
Node *mergeKLists(vector<Node *> &lists, int k)
{
  mergesort(lists, 0, k - 1);

  return lists[0];
}

void printLinkedList(Node *head)
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
  // ^ Setting up the linked list as shown in the diagram

  int k = 8;

  // List 1
  int arr1[] = {1, 2, 4};
  Node *head1 = createList(arr1, 3);

  // List 2
  int arr2[] = {3, 6};
  Node *head2 = createList(arr2, 2);

  // List 3
  int arr3[] = {4, 5, 9, 10};
  Node *head3 = createList(arr3, 4);

  // List 4
  int arr4[] = {7};
  Node *head4 = createList(arr4, 1);

  // List 5
  int arr5[] = {6, 8};
  Node *head5 = createList(arr5, 2);

  // List 6
  int arr6[] = {2, 7, 8, 10};
  Node *head6 = createList(arr6, 4);

  // List 7
  int arr7[] = {17, 19, 22};
  Node *head7 = createList(arr7, 3);

  // List 8
  int arr8[] = {4, 18};
  Node *head8 = createList(arr8, 2);

  cout << "Linked list structure before combining:" << endl;
  printLinkedList(head1);
  printLinkedList(head2);
  printLinkedList(head3);
  printLinkedList(head4);
  printLinkedList(head5);
  printLinkedList(head6);
  printLinkedList(head7);
  printLinkedList(head8);

  // ^ Store the starting nodes in an array
  vector<Node *> lists = {head1, head2, head3, head4, head5, head6, head7, head8};

  // & merge all lists into one
  Node *mergedList = mergeKLists(lists, k);

  cout << endl;

  cout << "Merged Linked List : " << endl;
  printLinkedList(mergedList);

  return 0;
}