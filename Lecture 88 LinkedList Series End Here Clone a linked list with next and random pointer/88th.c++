// TODO : Problem 1 : Clone a linked list :-

// & Method 1 :-

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//   int data;
//   Node *next;
//   Node *arb;

//   Node(int value)
//   {
//     data = value;
//     next = NULL;
//     arb = NULL;
//   }
// };

// // & Function to set up the linked list with next and arb pointer
// Node *setUpList()
// {
//   Node *node1 = new Node(1);
//   Node *node2 = new Node(2);
//   Node *node3 = new Node(3);
//   Node *node4 = new Node(4);
//   Node *node5 = new Node(5);

//   // ^ Setting up next pointers to link nodes in sequence
//   node1->next = node2;
//   node2->next = node3;
//   node3->next = node4;
//   node4->next = node5;

//   // * Setting up arb pointer based on given question
//   node1->arb = node3;
//   node2->arb = node1;
//   node3->arb = node5;
//   node4->arb = node3;
//   node5->arb = node2;

//   return node1;
// }

// // * Finding the arb pointer
// Node *find(Node *curr1, Node *curr2, Node *x)
// {
//   if (x == NULL)
//   {
//     return NULL;
//   }

//   while (curr1 != x)
//   {
//     curr1 = curr1->next;
//     curr2 = curr2->next;
//   }

//   return curr2;
// }

// Node *copyList(Node *head)
// {
//   Node *headCopy = new Node(0);
//   Node *tailCopy = headCopy;
//   Node *temp = head;

//   // & clone created without arb pointer
//   while (temp)
//   {
//     tailCopy->next = new Node(temp->data);
//     tailCopy = tailCopy->next;
//     temp = temp->next;
//   }

//   tailCopy = headCopy;
//   headCopy = headCopy->next;
//   delete tailCopy;

//   // * assign random pointer to the clone linked list
//   tailCopy = headCopy;
//   temp = head;

//   while (temp)
//   {
//     tailCopy->arb = find(head, headCopy, temp->arb);
//     tailCopy = tailCopy->next;
//     temp = temp->next;
//   }

//   return headCopy;
// }

// void printList(Node *head)
// {
//   Node *trev = head;
//   while (trev)
//   {
//     cout << "Node " << trev->data << " ";
//     if (trev->arb)
//     {
//       cout << "points to node " << trev->arb->data << " ";
//     }
//     cout << endl;
//     trev = trev->next;
//   }
// }

// int main()
// {
//   Node *head = setUpList();
//   cout << "Original linked list : " << endl;
//   printList(head);

//   cout << endl;

//   Node *CloneList = copyList(head);
//   cout << "Clone linked list : " << endl;
//   printList(CloneList);

//   return 0;
// }

// & Method 2 : Optimized solution :-

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// class Node
// {
// public:
//   int data;
//   Node *next;
//   Node *arb;

//   Node(int value)
//   {
//     data = value;
//     next = NULL;
//     arb = NULL;
//   }
// };

// // & Function to set up the linked list with next and arb pointer
// Node *setUpList()
// {
//   Node *node1 = new Node(1);
//   Node *node2 = new Node(2);
//   Node *node3 = new Node(3);
//   Node *node4 = new Node(4);
//   Node *node5 = new Node(5);

//   // ^ Setting up next pointers to link nodes in sequence
//   node1->next = node2;
//   node2->next = node3;
//   node3->next = node4;
//   node4->next = node5;

//   // * Setting up arb pointer based on given question
//   node1->arb = node3;
//   node2->arb = node1;
//   node3->arb = node5;
//   node4->arb = node3;
//   node5->arb = node2;

//   return node1;
// }

// Node *copyList(Node *head)
// {
//   Node *headCopy = new Node(0);
//   Node *tailCopy = headCopy;
//   Node *temp = head;

//   // & clone created without arb pointer
//   while (temp)
//   {
//     tailCopy->next = new Node(temp->data);
//     tailCopy = tailCopy->next;
//     temp = temp->next;
//   }

//   tailCopy = headCopy;
//   headCopy = headCopy->next;
//   delete tailCopy;

//   // * assign random pointer to the clone linked list
//   tailCopy = headCopy;
//   temp = head;

//   unordered_map<Node *, Node *> m;

//   // & fill the value inside map
//   while (temp)
//   {
//     m[temp] = tailCopy;
//     temp = temp->next;
//     tailCopy = tailCopy->next;
//   }

//   // ^ Assign random pointer to clone linked list
//   temp = head;
//   tailCopy = headCopy;

//   while (temp)
//   {
//     tailCopy->arb = m[temp->arb];
//     tailCopy = tailCopy->next;
//     temp = temp->next;
//   }

//   return headCopy;
// }

// void printList(Node *head)
// {
//   Node *trev = head;
//   while (trev)
//   {
//     cout << "Node " << trev->data << " ";
//     if (trev->arb)
//     {
//       cout << "points to node " << trev->arb->data << " ";
//     }
//     cout << endl;
//     trev = trev->next;
//   }
// }

// int main()
// {
//   Node *head = setUpList();
//   cout << "Original linked list : " << endl;
//   printList(head);

//   cout << endl;

//   Node *CloneList = copyList(head);
//   cout << "Clone linked list : " << endl;
//   printList(CloneList);

//   return 0;
// }

// & Most Optimized approach :-

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//   int data;
//   Node *next;
//   Node *arb;

//   Node(int value)
//   {
//     data = value;
//     next = NULL;
//     arb = NULL;
//   }
// };

// // & Function to set up the linked list with next and arb pointer
// Node *setUpList()
// {
//   Node *node1 = new Node(1);
//   Node *node2 = new Node(2);
//   Node *node3 = new Node(3);
//   Node *node4 = new Node(4);
//   Node *node5 = new Node(5);

//   // ^ Setting up next pointers to link nodes in sequence
//   node1->next = node2;
//   node2->next = node3;
//   node3->next = node4;
//   node4->next = node5;

//   // * Setting up arb pointer based on given question
//   node1->arb = node3;
//   node2->arb = node1;
//   node3->arb = node5;
//   node4->arb = node3;
//   node5->arb = node2;

//   return node1;
// }

// Node *copyList(Node *head)
// {
//   Node *headCopy = new Node(0);
//   Node *tailCopy = headCopy;
//   Node *temp = head;

//   // & clone created without arb pointer
//   while (temp)
//   {
//     tailCopy->next = new Node(temp->data);
//     tailCopy = tailCopy->next;
//     temp = temp->next;
//   }

//   tailCopy = headCopy;
//   headCopy = headCopy->next;
//   delete tailCopy;

//   // * assign random pointer to the clone linked list
//   tailCopy = headCopy;
//   temp = head;

//   // ^ Insert them in original Linked list (merge them)
//   Node *curr1 = head, *curr2 = headCopy;
//   Node *front1, *front2;

//   while (curr1)
//   {
//     front1 = curr1->next;
//     front2 = curr2->next;

//     curr1->next = curr2;
//     curr2->next = front1;

//     curr1 = front1;
//     curr2 = front2;
//   }

//   // ? Assign random pointer to clone linked list
//   curr1 = head;

//   while (curr1)
//   {
//     curr2 = curr1->next;

//     if (curr1->next)
//     {
//       curr2->arb = curr1->arb->next;
//       curr1 = curr2->next;
//     }
//   }

//   // * Break the linked list
//   curr1 = head;

//   while (curr1->next)
//   {
//     front1 = curr1->next;
//     curr1->next = front1->next;
//     curr1 = front1;
//   }

//   return headCopy;
// }

// void printList(Node *head)
// {
//   Node *trev = head;
//   while (trev)
//   {
//     cout << "Node " << trev->data << " ";
//     if (trev->arb)
//     {
//       cout << "points to node " << trev->arb->data << " ";
//     }
//     cout << endl;
//     trev = trev->next;
//   }
// }

// int main()
// {
//   Node *head = setUpList();
//   cout << "Original linked list : " << endl;
//   printList(head);

//   cout << endl;

//   Node *CloneList = copyList(head);
//   cout << "Clone linked list : " << endl;
//   printList(CloneList);

//   return 0;
// }