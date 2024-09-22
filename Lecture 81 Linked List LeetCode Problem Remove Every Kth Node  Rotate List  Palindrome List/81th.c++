// * Remove Nth Node from End of Linked List :-

// #include <iostream>
// #include <vector>
// using namespace std;

// class ListNode
// {
// public:
//   int val;

//   ListNode *next;

//   ListNode(int data)
//   {
//     val = data;
//     next = NULL;
//   }
// };

// ListNode *CreateLinkedList(int arr[], int index, int size)
// {
//   if (index == size)
//   {
//     return NULL;
//   }

//   ListNode *temp = new ListNode(arr[index]);
//   temp->next = CreateLinkedList(arr, index + 1, size);
//   return temp;
// }

// ListNode *deleteKNode(ListNode *head, int n)
// {
//   int count = 0;
//   ListNode *temp = head;

//   // & count total number of listnodes
//   while (temp)
//   {
//     count++;
//     temp = temp->next;
//   }

//   count -= n;

//   if (count == 0)
//   {
//     temp = head;
//     head = head->next;
//     delete temp;
//     return head;
//   }

//   ListNode *curr = head, *prev = NULL;

//   while (count--)
//   {
//     prev = curr;
//     curr = curr->next;
//   }

//   prev->next = curr->next;
//   delete curr;

//   return head;
// }

// int main()
// {
//   ListNode *Head = NULL;

//   int arr[] = {10, 20, 30, 40, 50};

//   Head = CreateLinkedList(arr, 0, 5);

//   int n;
//   cout << "Enter n : ";
//   cin >> n;

//   cout << "After removing Nth node from End of Linked List : ";

//   Head = deleteKNode(Head, n);

//   while (Head)
//   {
//     cout << Head->val << " ";
//     Head = Head->next;
//   }

//   return 0;
// }

// * Remove Every Kth Node from Linked List :-

// #include <iostream>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//   int val;

//   Node *next;

//   Node(int data)
//   {
//     val = data;
//     next = NULL;
//   }
// };

// Node *CreateLinkedList(int arr[], int index, int size)
// {
//   if (index == size)
//   {
//     return NULL;
//   }

//   Node *temp = new Node(arr[index]);
//   temp->next = CreateLinkedList(arr, index + 1, size);
//   return temp;
// }

// Node *deleteKNode(Node *head, int k)
// {
//   if (k == 1)
//   {
//     return NULL;
//   }

//   Node *curr = head, *prev = NULL;
//   int count = 1;

//   while (curr)
//   {
//     // & when k == count , delete this node
//     if (k == count)
//     {
//       prev->next = curr->next;
//       delete curr;
//       curr = prev->next;
//       count = 1;
//     }
//     // & when k !== count, skip this node
//     else
//     {
//       prev = curr;
//       curr = curr->next;
//       count++;
//     }
//   }

//   return head;
// }

// int main()
// {
//   Node *Head = NULL;

//   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//   Head = CreateLinkedList(arr, 0, 10);

//   int k;
//   cout << "Enter k : ";
//   cin >> k;

//   cout << "After removing kth node from Linked List : ";

//   Head = deleteKNode(Head, k);

//   while (Head)
//   {
//     cout << Head->val << " ";
//     Head = Head->next;
//   }

//   return 0;
// }

// * Rotate Linked List :-

// #include <iostream>
// #include <vector>
// using namespace std;

// class ListNode
// {
// public:
//   int val;

//   ListNode *next;

//   ListNode(int data)
//   {
//     val = data;
//     next = NULL;
//   }
// };

// ListNode *CreateLinkedList(int arr[], int index, int size)
// {
//   if (index == size)
//   {
//     return NULL;
//   }

//   ListNode *temp = new ListNode(arr[index]);
//   temp->next = CreateLinkedList(arr, index + 1, size);
//   return temp;
// }

// ListNode *rotateRight(ListNode *head, int k)
// {
//   if (head == NULL || head->next == NULL)
//   {
//     return head;
//   }

//   // ^ count no. of nodes
//   int count = 0;
//   ListNode *temp = head;

//   while (temp)
//   {
//     count++;
//     temp = temp->next;
//   }

//   k = k % count;
//   if (k == 0)
//   {
//     return head;
//   }

//   count -= k;
//   ListNode *curr = head, *prev = NULL;

//   while (count--)
//   {
//     prev = curr;
//     curr = curr->next;
//   }

//   prev->next = NULL;
//   ListNode *Tail = curr;

//   // ^ Second list uske last node pe lake jao

//   while (Tail->next != NULL)
//   {
//     Tail = Tail->next;
//   }

//   Tail->next = head;

//   head = curr;
//   return head;
// }

// int main()
// {
//   ListNode *Head = NULL;

//   int arr[] = {10, 20, 30, 40, 50};

//   Head = CreateLinkedList(arr, 0, 5);

//   int k;
//   cout << "Enter k : ";
//   cin >> k;

//   cout << "Rotating Linked List by " << k << " rotation on right side : ";

//   Head = rotateRight(Head, k);

//   while (Head)
//   {
//     cout << Head->val << " ";
//     Head = Head->next;
//   }

//   return 0;
// }

// * Check Palindrome Linked List :-

#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
  int val;

  ListNode *next;

  ListNode(int data)
  {
    val = data;
    next = NULL;
  }
};

ListNode *CreateLinkedList(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }

  ListNode *temp = new ListNode(arr[index]);
  temp->next = CreateLinkedList(arr, index + 1, size);
  return temp;
}

bool isPalindrome(ListNode *head)
{
  if (head->next == NULL)
  {
    return 1;
  }

  // ^ Count no. of nodes
  int count = 0;
  ListNode *temp = head;

  while (temp)
  {
    count++;
    temp = temp->next;
  }

  count /= 2;

  ListNode *curr = head, *prev = NULL;

  // & Skin no. of nodes
  while (count--)
  {
    prev = curr;
    curr = curr->next;
  }

  prev->next = NULL;

  // & Reverse the second linked list, curr is pointing it
  ListNode *front;
  prev = NULL;

  while (curr)
  {
    front = curr->next;
    curr->next = prev;
    prev = curr;
    curr = front;
  }

  // ^ Prev is pointing to second list
  // & Head os pointing to first list

  ListNode *head1 = head, *head2 = prev;

  // & Check Palindrome
  while (head1)
  {
    if (head1->val != head2->val)
    {
      return 0;
    }
    head1 = head1->next;
    head2 = head2->next;
  }

  return 1;
}

int main()
{
  ListNode *Head = NULL;

  int arr[] = {1, 2};

  Head = CreateLinkedList(arr, 0, 2);

  if (isPalindrome(Head))
  {
    cout << "Yes it is a palindrome";
  }
  else
  {
    cout << "No it is not a palindrome";
  }

  return 0;
}