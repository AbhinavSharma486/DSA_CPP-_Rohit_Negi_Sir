// TODO : Implement 2 stack in an array :-
// * Link :- https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// #include <iostream>
// #include <array>
// #include <stack>
// using namespace std;

// class twoStacks
// {
// public:
//   int *arr;
//   int Top1, Top2;
//   int size;

//   twoStacks(int n)
//   {
//     arr = new int[n];
//     size = n;
//     Top1 = -1;
//     Top2 = n;
//   }

//   void push1(int x)
//   {
//     // stack full to nhi hai
//     if (Top1 + 1 == Top2)
//     {
//       return;
//     }
//     else
//     {
//       Top1++;
//       arr[Top1] = x;
//     }
//   }

//   void push2(int x)
//   {
//     // stack full to nhi hai
//     if (Top2 - 1 == Top1)
//     {
//       return;
//     }
//     else
//     {
//       Top2--;
//       arr[Top2] = x;
//     }
//   }

//   int pop1()
//   {
//     if (Top1 == -1)
//     {
//       return -1;
//     }
//     else
//     {
//       int elem = arr[Top1];
//       Top1--;
//       return elem;
//     }
//   }

//   int pop2()
//   {
//     if (Top2 == size)
//     {
//       return -1;
//     }
//     else
//     {
//       int elem = arr[Top2];
//       Top2++;
//       return elem;
//     }
//   }
// };

// int main()
// {
//   twoStacks ts(6);

//   ts.push1(5);
//   ts.push2(10);
//   ts.push1(15);
//   ts.push2(20);
//   ts.push1(25);
//   ts.push2(30);

//   cout << "Popped from Stack 1: " << ts.pop1() << endl;
//   cout << "Popped from Stack 2: " << ts.pop2() << endl;
//   cout << "Popped from Stack 1: " << ts.pop1() << endl;
//   cout << "Popped from Stack 2: " << ts.pop2() << endl;
//   cout << "Popped from Stack 1: " << ts.pop1() << endl;
//   cout << "Popped from Stack 2: " << ts.pop2() << endl;

//   cout << "Popped from Stack 1: " << ts.pop1() << endl; // underflow
//   cout << "Popped from Stack 2: " << ts.pop2() << endl; // underflow

//   return 0;
// }

// -------------------------------------------------------------------------------

// TODO : N Stack in an array :-
// * link :- https://www.naukri.com/code360/problems/n-stacks-in-an-array_1164271?leftPanelTabValue=PROBLEM

#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
  int index;
  Node *next;

  Node(int x)
  {
    index = x;
    next = NULL;
  }
};

class NStack
{
public:
  stack<int> st;
  int *arr;
  Node **Top;

  NStack(int N, int S)
  {
    arr = new int[S];
    Top = new Node *[N];

    for (int i = 0; i < N; i++)
      Top[i] = NULL;
    for (int i = 0; i < S; i++)
      st.push(i);
  }

  bool push(int x, int m)
  {
    if (st.empty())
      return 0;

    arr[st.top()] = x;
    Node *temp = new Node(st.top());
    temp->next = Top[m - 1];
    Top[m - 1] = temp;
    st.pop();
    return 1;
  }

  int pop(int m)
  {
    if (Top[m - 1] == NULL)
      return -1;

    int element = arr[Top[m - 1]->index];
    st.push(Top[m - 1]->index);
    Top[m - 1] = Top[m - 1]->next;
    return element;
  }
};

int main()
{
  NStack ns(3, 6);

  ns.push(10, 1);
  ns.push(20, 2);
  ns.push(30, 1);
  ns.push(40, 3);
  ns.push(50, 2);
  ns.push(60, 3);

  cout << "Popped from Stack 1: " << ns.pop(1) << endl;
  cout << "Popped from Stack 2: " << ns.pop(2) << endl;
  cout << "Popped from Stack 3: " << ns.pop(3) << endl;
  cout << "Popped from Stack 1: " << ns.pop(1) << endl;
  cout << "Popped from Stack 2: " << ns.pop(2) << endl;
  cout << "Popped from Stack 3: " << ns.pop(3) << endl;

  return 0;
}