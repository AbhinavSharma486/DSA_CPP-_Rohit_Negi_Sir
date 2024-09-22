// * Problem no. 1 : Reverse a Linked List :-

// & Method 1 :-

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

// ListNode *reverseList(ListNode *head)
// {
//   vector<int> ans;
//   ListNode *temp = head;

//   while (temp != NULL)
//   {
//     ans.push_back(temp->val);
//     temp = temp->next;
//   }

//   int i = ans.size() - 1;
//   temp = head;

//   while (temp)
//   {
//     temp->val = ans[i];
//     i--;
//     temp = temp->next;
//   }

//   return head;
// }

// int main()
// {
//   ListNode *Head = NULL;

//   int arr[] = {2, 4, 6, 8, 10};

//   Head = CreateLinkedList(arr, 0, 5);

//   cout << "After Reversing Linked List : ";

//   Head = reverseList(Head);

//   while (Head)
//   {
//     cout << Head->val << " ";
//     Head = Head->next;
//   }

//   return 0;
// }

// & Method 2 : Variance Reverse nodes of linked list :-

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

// ListNode *reverseList(ListNode *head)
// {
//   ListNode *curr = head, *prev = NULL, *fut = NULL;

//   while (curr)
//   {
//     fut = curr->next;
//     curr->next = prev;
//     prev = curr;
//     curr = fut;
//   }

//   head = prev;

//   return head;
// }

// int main()
// {
//   ListNode *Head = NULL;

//   int arr[] = {2, 4, 6, 8, 10};

//   Head = CreateLinkedList(arr, 0, 5);

//   cout << "After Reversing Linked List : ";

//   Head = reverseList(Head);

//   while (Head)
//   {
//     cout << Head->val << " ";
//     Head = Head->next;
//   }

//   return 0;
// }

// & Method 3 : Reverse Nodes of linked list using recursion :-

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

// ListNode *reverseList(ListNode *curr, ListNode *prev)
// {
//   if (curr == NULL)
//   {
//     return prev;
//   }

//   ListNode *fut = curr->next;
//   curr->next = prev;
//   return reverseList(fut, curr);
// }

// int main()
// {
//   ListNode *Head = NULL;

//   int arr[] = {2, 4, 6, 8, 10};

//   Head = CreateLinkedList(arr, 0, 5);

//   cout << "After Reversing Linked List : ";

//   Head = reverseList(Head, NULL);

//   while (Head)
//   {
//     cout << Head->val << " ";
//     Head = Head->next;
//   }

//   return 0;
// }

// * Problem no. 2 : Middle of the linked list :-

// & Method 1 :-

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

// ListNode *middleNode(ListNode *head)
// {
//   int count = 0;

//   // ^ count total no. of nodes
//   ListNode *temp = head;

//   while (temp)
//   {
//     count++;
//     temp = temp->next;
//   }

//   count /= 2;

//   // ? This no. of steps , I have to take from start
//   temp = head;
//   while (count--)
//   {
//     temp = temp->next;
//   }

//   return temp;
// }

// int main()
// {
//   ListNode *Head = NULL;

//   int arr[] = {2, 4, 6, 8, 10};

//   Head = CreateLinkedList(arr, 0, 5);

//   cout << "Middle of the Linked List : ";

//   Head = middleNode(Head);

//   if (Head)
//   {
//     cout << Head->val << " ";
//   }

//   return 0;
// }

// & Method 2 : Using Concept of Slow and fast pointer :-

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

ListNode *middleNode(ListNode *head)
{
  ListNode *slow = head, *fast = head;

  while (fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}

int main()
{
  ListNode *Head = NULL;

  int arr[] = {2, 4, 6, 8, 10};

  Head = CreateLinkedList(arr, 0, 5);

  cout << "Middle of the Linked List : ";

  Head = middleNode(Head);

  if (Head)
  {
    cout << Head->val << " ";
  }

  return 0;
}