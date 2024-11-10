// TODO Problem 1 : Remove Loop in Linked List :-

// & Method 1 :-

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

Node *creatingSLL(int arr[], int index, int size, Node *head, Node *fourthNode, Node *&tail)
{
  if (index == size)
  {
    return NULL;
  }

  Node *temp = new Node(arr[index]);

  // ^ set head if it's the first node
  if (index == 0)
  {
    head = temp;
  }

  // * save the reference of the 4th node
  if (index == 3)
  {
    fourthNode = temp;
  }

  tail = temp; // ^ updating the tail

  temp->next = creatingSLL(arr, index + 1, size, head, fourthNode, tail);

  // * Pointing last node to the 4th node
  if (index == size - 1)
  {
    temp->next = fourthNode;
  }

  return temp;
}

void detectLoopAndRemovingLoop(Node *head)
{
  Node *slow = head, *fast = head;

  while (fast && fast->next)
  {
    slow = slow->next;       // * increasing slow by 1
    fast = fast->next->next; // * increasing fast by 2

    if (slow == fast) // * when slow == fast then we break the loop
    {
      break;
    }
  }

  if (fast == NULL || fast->next == NULL)
  {
    return;
  }

  slow = head;

  while (slow != fast)
  {
    slow = slow->next;
    fast = fast->next;
  }

  slow->next = NULL;
}

void printingSLL(Node *head, int limit)
{
  Node *trev = head;
  int count = 0;

  while (trev && count < limit)
  {
    cout << trev->data << " ";
    trev = trev->next;
    count++;
  }

  cout << endl;
}

int main()
{
  Node *head = NULL;
  Node *fourthNode = NULL;
  Node *tail = NULL;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  head = creatingSLL(arr, 0, 12, head, fourthNode, tail);

  cout << "Linked list before removing loop : " << endl;
  printingSLL(head, 14);

  detectLoopAndRemovingLoop(head);

  cout << "Linked list after removing loop : " << endl;
  printingSLL(head, 14);

  return 0;
}




// & Method 2 :-

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

Node *creatingSLL(int arr[], int index, int size, Node *head, Node *&tail, Node *fourthNode)
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

  // & save the reference to the 4th node
  if (index == 3)
  {
    fourthNode = temp;
  }

  tail = head; // ^ updating the tail

  temp->next = creatingSLL(arr, index + 1, size, head, tail, fourthNode);

  // ~ pointing the last node to the 4th node
  if (index == size - 1)
  {
    temp->next = fourthNode;
  }

  return temp;
}

void detectAndRemovingLoop(Node *head)
{
  Node *slow = head, *fast = head;

  while (fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
      break;
    }
  }

  if (!fast || !fast->next)
  {
    return;
  }

  // & Find the length of the loop
  slow = fast->next;
  int count = 1;

  while (slow != fast)
  {
    count++;
    slow = slow->next;
  }

  // ^ Loop ke andar kinte nodes hai
  slow = head;
  fast = head;

  // ! fast ko kitne distance door rakhna hai , jo count ke andar store hai

  while (count--)
  {
    fast = fast->next;
  }

  while (slow != fast)
  {
    slow = slow->next;
    fast = fast->next;
  }

  slow->next = NULL;
}

void printingSLL(Node *head, int limit)
{
  Node *trev = head;
  int count = 0;

  while (trev && count < limit)
  {
    cout << trev->data << " ";
    trev = trev->next;
    count++;
  }

  cout << endl;
}

int main()
{
  Node *head = NULL;
  Node *fourthNode = NULL;
  Node *tail = NULL;

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  head = creatingSLL(arr, 0, 12, head, tail, fourthNode);

  cout << "Linked list before removing loop : " << endl;
  printingSLL(head, 12);

  detectAndRemovingLoop(head);

  cout << "Linked list after removing loop : " << endl;
  printingSLL(head, 4);

  return 0;
}





// TODO Problem 2 : Intersection point in y shaped Linked List :-

// & Method 1 :-

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

void mergingBothSLL(Node *head1, Node *head2)
{
  // ^ Finding the 5th node in the first list
  Node *temp = head1;
  int i = 1;
  while (i < 5 && temp)
  {
    temp = temp->next;
    i++;
  }

  // & Merging the second list at the 5th node of the first list
  if (temp)
  {
    // ? Traversing to the end of the second list
    Node *temp2 = head2;
    while (temp2->next != NULL)
    {
      temp2 = temp2->next;
    }

    // * Pointing the last node of the second list to the 5th node of the first list
    temp2->next = temp;
  }
}

int intersectionPoint(Node *head1, Node *head2)
{
  // * Counting no. of nodes
  Node *curr1 = head1, *curr2 = head2;
  int count1 = 0, count2 = 0;

  // & jb tk curr1 exists krta hai tb tk count1 ko badhate rho
  while (curr1)
  {
    count1++;
    curr1 = curr1->next;
  }

  // & jb tk curr2 exists krta hai tb tk count2 ko badhate rho
  while (curr2)
  {
    count2++;
    curr2 = curr2->next;
  }

  // ^ ab dono ko head pr lekr aao
  curr1 = head1, curr2 = head2;

  // & jb tk curr1 ke nodes jyada hai curr2 se tb tk curr1 ko badhate rho aur count1 ko km krte rho
  while (count1 > count2)
  {
    curr1 = curr1->next;
    count1--;
  }

  // * jb tk curr2 ke nodes jyada hai curr1 se tb tk curr2 ko badhate rho aur count2 ko km krte rho
  while (count2 > count1)
  {
    curr2 = curr2->next;
    count2--;
  }

  // ^ jb tk dono mil nhi jate tb tk dono ko badhate rho same speed se
  while (curr1 != curr2)
  {
    curr1 = curr1->next;
    curr2 = curr2->next;
  }

  // ! agar curr1 null ho jaye to return -1 krna hai
  if (!curr1)
    return -1;

  return curr1->data;
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

  int arr1[] = {1, 2, 3, 4, 5, 6, 7};
  int arr2[] = {8, 9};

  head1 = creatingSLL(arr1, 0, 7);
  head2 = creatingSLL(arr2, 0, 2);

  cout << "First Linked list is : " << endl;
  printingSLL(head1);

  mergingBothSLL(head1, head2);

  cout << "Second Linked list is : " << endl;
  printingSLL(head2);

  intersectionPoint(head1, head2);

  return 0;
}




// & Method 2 :-

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

void mergingBothSLL(Node *head1, Node *head2)
{
  // & Finding the 5th node in first list
  Node *temp = head1;
  int i = 1;
  while (i < 5 && temp)
  {
    temp = temp->next;
    i++;
  }

  // ^ merging the second list at the 5th node of the first list
  if (temp)
  {
    // ? Traversing to the end of the second list
    Node *temp2 = head2;
    while (temp2->next != NULL)
    {
      temp2 = temp2->next;
    }

    // * pointing the last node of the second list to the 5th node of the first list
    temp2->next = temp;
  }
}

int intersectionPoint(Node *head1, Node *head2)
{
  Node *curr1 = head1;

  while (curr1->next)
  {
    curr1 = curr1->next;
  }

  curr1->next = head1;

  Node *slow = head2, *fast = head2;

  while (fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
      break;
    }
  }

  // * Not connected
  if (!fast || !fast->next)
  {
    return -1;
  }

  slow = head2;
  while (slow != fast)
  {
    slow = slow->next;
    fast = fast->next;
  }

  return slow->data;
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

  int arr1[] = {1, 2, 3, 4, 5, 6, 7};
  int arr2[] = {8, 9};

  head1 = creatingSLL(arr1, 0, 7);
  head2 = creatingSLL(arr2, 0, 2);

  cout << "First Linked List is : " << endl;
  printingSLL(head1);

  mergingBothSLL(head1, head2);

  cout << "Second Linked List is : " << endl;
  printingSLL(head2);

  int intersection = intersectionPoint(head1, head2);
  cout << "They both list intesection at this point : " << intersection;

  return 0;
}