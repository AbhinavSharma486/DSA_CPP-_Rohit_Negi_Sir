// TODO : Problem 1 : Add two numbers represented by linked lists :-

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

Node *creatingSLL(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->next = creatingSLL(arr, index + 1, size);

  return temp;
}

// & Reversing the linked list
Node *reversingSLL(Node *curr, Node *prev)
{
  if (curr == NULL)
  {
    return prev;
  }

  Node *front = curr->next;
  curr->next = prev;

  return reversingSLL(front, curr);
}

Node *addOfSLL(Node *head1, Node *head2)
{
  Node *curr1 = head1, *curr2 = head2;
  int carry = 0;

  Node *head = new Node(0);
  Node *tail = head;

  while (curr1 && curr2)
  {
    int sum = curr1->data + curr2->data + carry;

    tail->next = new Node(sum % 10);

    tail = tail->next;
    curr1 = curr1->next;
    curr2 = curr2->next;
    carry = sum / 10;
  }

  while (curr1)
  {
    int sum = curr1->data + carry;
    tail->next = new Node(sum % 10);
    tail = tail->next;
    curr1 = curr1->next;
    carry = sum / 10;
  }

  while (curr2)
  {
    int sum = curr2->data + carry;
    tail->next = new Node(sum % 10);
    tail = tail->next;
    curr2 = curr2->next;
    carry = sum / 10;
  }

  while (carry)
  {
    tail->next = new Node(carry % 10);
    carry /= 10;
  }

  head = reversingSLL(head->next, NULL);
  return head;
}

void printingSLL(Node *head)
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
  Node *head1 = NULL;
  Node *head2 = NULL;

  int arr1[] = {9, 7, 6, 8, 4};
  int arr2[] = {6, 4, 3, 8};

  head1 = creatingSLL(arr1, 0, 5);
  head2 = creatingSLL(arr2, 0, 4);

  cout << "First Linked list : " << endl;
  printingSLL(head1);

  cout << "Second Linked list : " << endl;
  printingSLL(head2);

  cout << "After reversing first linked list : " << endl;
  head1 = reversingSLL(head1, NULL);
  printingSLL(head1);

  cout << "After reversing second linked list : " << endl;
  head2 = reversingSLL(head2, NULL);
  printingSLL(head2);

  cout << "Resultant of addition linked list : " << endl;
  printingSLL(addOfSLL(head1, head2));
}





// TODO : Problem 2 :  Reverse a linked list in group of sizes :-

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

Node *creatingDLL(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = creatingDLL(arr, index + 1, size, temp);

  return temp;
}

Node *reverseIt(Node *head, int k)
{
  // ^  dummy node create kro
  Node *first = new Node(0);

  first->next = head;
  head = first;

  int x;
  Node *second, *prev, *curr, *front;

  while (first->next)
  {
    x = k;
    second = first->next;
    prev = first;
    curr = first->next;

    while (x && curr)
    {
      front = curr->next;
      curr->next = prev;
      prev = curr;
      curr = front;
      x--;
    }

    first->next = prev;
    second->next = curr;
    first = second;
  }

  first = head;
  head = head->next;
  delete first;

  return head;
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
  Node *back = NULL;

  int k = 4;
  int arr[] = {2, 3, 4, 6, 8, 7, 5, 9, 11, 17};

  head = creatingDLL(arr, 0, 10, back);

  cout << "Linked list Before reversing : " << endl;
  printingDLL(head);

  head = reverseIt(head, k);

  cout << "Linked list After reversing : " << endl;
  printingDLL(head);

  return 0;
}