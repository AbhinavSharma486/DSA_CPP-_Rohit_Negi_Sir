// TODO : Problem 1: Remove Duplicate element from doubly linked list :-

// & Method 1 :-

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

Node *createDLL(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = createDLL(arr, index + 1, size, temp);

  return temp;
}

Node *removingDuplicateElement(Node *head)
{ // ! Deleting duplicate element
  vector<int> ans;
  ans.push_back(head->data);

  Node *curr = head->next;
  while (curr)
  {
    if (ans[ans.size() - 1] != curr->data)
    {
      ans.push_back(curr->data);
    }
    curr = curr->next;
  }

  curr = head;
  int index = 0;

  while (index < ans.size())
  {
    curr->data = ans[index];
    index++;
    curr = curr->next;
  }

  int size = ans.size() - 1;

  curr = head;

  while (size--)
  {
    curr = curr->next;
  }

  curr->next = NULL;

  return head;
}

Node *printLL(Node *head)
{
  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}
int main()
{
  Node *head = NULL;

  int arr[] = {2, 2, 2, 3, 3, 4, 4};

  head = createDLL(arr, 0, 7, NULL);

  cout << "Linked list before removing duplicate elements : " << endl;

  printLL(head);

  cout << endl;

  cout << "Linked list after removing duplicate elements : " << endl;

  removingDuplicateElement(head);

  printLL(head);

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

Node *createDLL(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = createDLL(arr, index + 1, size, temp);

  return temp;
}

Node *removingDuplicateElement(Node *head)
{ // ! Deleting duplicate element
  Node *curr = head->next, *prev = head;

  while (curr)
  {
    if (curr->data == prev->data)
    {
      prev->next = curr->next;

      delete curr;

      curr = prev->next;
    }
    else
    {
      prev = prev->next;

      curr = curr->next;
    }
  }

  return head;
}

Node *printLL(Node *head)
{
  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}
int main()
{
  Node *head = NULL;

  int arr[] = {2, 2, 2, 3, 3, 4, 4};

  head = createDLL(arr, 0, 7, NULL);

  cout << "Linked list before removing duplicate elements : " << endl;

  printLL(head);

  cout << endl;

  cout << "Linked list after removing duplicate elements : " << endl;

  removingDuplicateElement(head);

  printLL(head);

  return 0;
}





// TODO : Problem 2: Merge two sorted list :-

// & Method : using comparision then merge and without using extra spaces

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

Node *createDLL(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = createDLL(arr, index + 1, size, temp);

  return temp;
}

Node *mergeTwoSortedLinkedList(Node *head1, Node *head2)
{
  Node *head = new Node(0);
  Node *tail = head;

  // ? Traversing the both list
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

  // ^ Appending the remaining nodes of the non-empty list
  if (head1)
  {
    tail->next = head1;
  }
  else
  {
    tail->next = head2;
  }

  // & Returning the merges list
  tail = head;
  head = head->next;
  delete tail;

  return head;
}

Node *printLL(Node *head)
{
  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}
int main()
{
  Node *head1 = NULL, *head2 = NULL;

  int arr1[] = {1, 3, 5};
  int arr2[] = {2, 4, 6};

  head1 = createDLL(arr1, 0, 3, NULL);
  head2 = createDLL(arr2, 0, 3, NULL);

  cout << "Linked list before merge : " << endl;
  cout << "List 1 : ";
  printLL(head1);
  cout << endl;
  cout << "List 2 : ";
  printLL(head2);
  cout << endl;

  cout << "Linked list after merge : " << endl;

  printLL(mergeTwoSortedLinkedList(head1, head2));

  return 0;
}





// * Sort a list which contain 0, 1, 2 :-

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

Node *createDLL(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = createDLL(arr, index + 1, size, temp);

  return temp;
}

Node *sortingList(Node *head)
{
  Node *curr = head;
  int count0 = 0, count1 = 0, count2 = 0;

  // ^ Count the number of 0's, 1's, and 2's
  while (curr)
  {
    if (curr->data == 0)
      count0++;
    else if (curr->data == 1)
      count1++;
    else
      count2++;
    curr = curr->next;
  }

  // ^ Reset curr back to head to modify the list
  curr = head;

  // ? Update the list with the counted values
  while (count0--)
  {
    curr->data = 0;
    curr = curr->next;
  }

  while (count1--)
  {
    curr->data = 1;
    curr = curr->next;
  }

  while (count2--)
  {
    curr->data = 2;
    curr = curr->next;
  }

  return head;
}

Node *printLL(Node *head)
{
  Node *trev = head;
  while (trev)
  {
    cout << trev->data << " ";
    trev = trev->next;
  }

  return 0;
}
int main()
{
  Node *head = NULL;

  int arr[] = {0, 1, 2, 2, 0, 1, 0};

  head = createDLL(arr, 0, 7, NULL);

  cout << "Linked list before sorting : " << endl;
  printLL(head);
  cout << endl;

  cout << "Linked list after sorting : " << endl;

  printLL(sortingList(head));

  return 0;
}