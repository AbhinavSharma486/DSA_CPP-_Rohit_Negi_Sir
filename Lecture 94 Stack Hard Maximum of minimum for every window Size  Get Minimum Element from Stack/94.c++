
// TODO : Get Minimum Element from stack
// * LInk :- https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

// & Method 1 :-

#include <iostream>
#include <stack>
using namespace std;

void pushElement(int x, stack<int> &st1, stack<int> &st2)
{
  if (st1.empty())
  {
    st1.push(x);
    st2.push(x);
  }
  else
  {
    st1.push(x);
    st2.push(min(x, st2.top()));
  }
};

int popElement(stack<int> &st1, stack<int> &st2)
{
  if (st1.empty())
  {
    return -1;
  }
  else
  {
    int element = st1.top();
    st1.pop();
    st2.pop();
    return element;
  }
};

int getMinElement(stack<int> &st1, stack<int> &st2)
{
  if (st1.empty())
  {
    return -1;
  }
  else
  {
    return st2.top();
  }
};

int main()
{
  stack<int> st1;
  stack<int> st2;

  int choice;

  while (true)
  {
    cout << endl;
    cout << "Which operation do you want to perform ? : " << endl;

    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Get Minimum" << endl;
    cout << "4. End Program" << endl;

    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      int x;
      cout << "Enter element : ";
      cin >> x;
      pushElement(x, st1, st2);
      break;
    }
    case 2:
    {
      int poped = popElement(st1, st2);
      if (poped != -1)
      {
        cout << "Poped element : " << poped << endl;
      }
      else
      {
        cout << "Stack is empty " << endl;
      }
      break;
    }
    case 3:
    {
      int minElement = getMinElement(st1, st2);

      if (minElement != -1)
      {
        cout << "Minimum Element : " << minElement << endl;
      }
      else
      {
        cout << "Stack is empty " << endl;
      }
      break;
    }

    case 4:
      cout << "Program ended successfully!" << endl;
      return 0;

    default:
      cout << "Invalid choice." << endl;
      break;
    }
  }

  return 0;
}




// & Method 2 :- without using 2nd stack (use only 1 stack) :-

#include <iostream>
#include <stack>
using namespace std;

void pushElement(int x, stack<int> &st)
{
  if (st.empty())
  {
    st.push(x * 101 + x);
  }
  else
  {
    st.push(x * 101 + min(x, st.top() % 101));
  }
};

int popElement(stack<int> &st)
{
  if (st.empty())
  {
    return -1;
  }
  else
  {
    int element = st.top() / 101;
    st.pop();
    return element;
  }
};

int getMinElement(stack<int> &st)
{
  if (st.empty())
  {
    return -1;
  }
  else
  {
    return st.top() % 101;
  }
};

int main()
{
  stack<int> st;

  int choice;

  while (true)
  {
    cout << endl;
    cout << "Which operation do you want to perform ? : " << endl;

    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Get Minimum" << endl;
    cout << "4. End Program" << endl;

    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      int x;
      cout << "Enter element : ";
      cin >> x;
      pushElement(x, st);
      break;
    }
    case 2:
    {
      int poped = popElement(st);
      if (poped != -1)
      {
        cout << "Poped element : " << poped << endl;
      }
      else
      {
        cout << "Stack is empty " << endl;
      }
      break;
    }
    case 3:
    {
      int minElement = getMinElement(st);

      if (minElement != -1)
      {
        cout << "Minimum Element : " << minElement << endl;
      }
      else
      {
        cout << "Stack is empty " << endl;
      }
      break;
    }

    case 4:
      cout << "Program ended successfully!" << endl;
      return 0;

    default:
      cout << "Invalid choice." << endl;
      break;
    }
  }

  return 0;
}





// TODO :  Maximum of Minimum for every window size :-
// * Link :-https://www.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1?page=1&difficulty[]=2&category[]=Stack&sortBy=submissions

// & Method 1 :- this method gives error in gfg (TLE) Time limit exceed

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> maxOfMin(vector<int> arr, int n)
{
  vector<int> ans(n, 0);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      int num = INT_MAX;

      for (int k = j; k < j + i + 1; k++)
      {
        num = min(num, arr[k]);
      }

      ans[i] = max(ans[i], num);
    }
  }

  return ans;
};

int main()
{
  vector<int> arr = {10, 20, 15, 50, 10, 70, 30};

  int n = arr.size();

  vector<int> ans = maxOfMin(arr, n);

  cout << "ans : ";

  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}




// & Method 2 :- O(n)

#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

vector<int> maxOfMin(vector<int> arr, int n)
{
  vector<int> ans(n, 0);
  stack<int> st;

  for (int i = 0; i < n; i++)
  {
    // value kb tak pop hogi
    // next smallest right & next smallest left
    while (!st.empty() && arr[st.top()] > arr[i])
    {
      int index = st.top();
      st.pop();

      // i = next smallest right
      // stack ke andar jo indx hai vo next smallest left

      int range;
      if (st.empty())
      {
        range = i;
      }
      else
      {
        range = i - st.top() - 1;
      }

      ans[range - 1] = max(ans[range - 1], arr[index]);
    }

    st.push(i);
  }

  // stack ke element ko empty kro
  while (!st.empty())
  {

    int index = st.top();
    st.pop();

    int range;
    if (st.empty())
    {
      range = n;
    }
    else
    {
      range = n - st.top() - 1;
    }

    ans[range - 1] = max(ans[range - 1], arr[index]);
  }

  // ans array ke value ko update kar do
  for (int i = n - 2; i >= 0; i--)
  {
    ans[i] = max(ans[i], ans[i + 1]);
  }

  return ans;
};

int main()
{
  vector<int> arr = {10, 20, 15, 50, 10, 70, 30};

  int n = arr.size();

  vector<int> ans = maxOfMin(arr, n);

  cout << "ans : ";

  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}