// TODO : Largest Rectange in Histogram :-
// * Link :- https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/1536671766/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int> &arr, int n)
{
  vector<int> Right(n);
  vector<int> Left(n);
  stack<int> st;

  // * Next Smallest Right
  for (int i = 0; i < n; i++)
  {
    while (!st.empty() && arr[st.top()] > arr[i])
    {
      Right[st.top()] = i;
      st.pop();
    }
    st.push(i);
  }

  while (!st.empty())
  {
    Right[st.top()] = n;
    st.pop();
  }

  // * Next Smallest Left
  for (int i = n - 1; i >= 0; i--)
  {
    while (!st.empty() && arr[st.top()] > arr[i])
    {
      Left[st.top()] = i;
      st.pop();
    }

    st.push(i);
  }

  while (!st.empty())
  {
    Left[st.top()] = -1;
    st.pop();
  }

  // ^ using a formula for finding largest rectange width  : arr * [(Right[i] - Left[i]) - 1]
  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    ans = max(ans, arr[i] * (Right[i] - Left[i] - 1));
  }

  return ans;
}

int main()
{
  vector<int> arr = {2, 3, 4, 2, 6, 5, 4, 5, 3};

  int n = arr.size();

  int ans = largestRectangleArea(arr, n);

  cout << "Largest Rectange width in histogram : " << ans;

  return 0;
}

// * Method :- An Optimized approach

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int> &arr, int n)
{
  stack<int> st;
  int ans = 0;
  int index;

  for (int i = 0; i < n; i++)
  {
    while (!st.empty() && arr[st.top()] > arr[i])
    {
      index = st.top();
      st.pop();

      if (!st.empty())
      {
        ans = max(ans, arr[index] * (i - st.top() - 1));
      }
      else
      {
        ans = max(ans, arr[index] * i);
      }
    }

    st.push(i);
  }

  while (!st.empty())
  {
    index = st.top();
    st.pop();

    if (!st.empty())
    {
      ans = max(ans, arr[index] * (n - st.top() - 1));
    }
    else
    {
      ans = max(ans, arr[index] * n);
    }
  }

  return ans;
}

int main()
{
  vector<int> arr0 = {2, 3, 4, 2, 6, 5, 4, 5, 3}; // 18
  // vector<int> arr1 = {2, 1, 5, 6, 2, 3}; // 10

  int n = arr0.size();

  int ans = largestRectangleArea(arr0, n);

  cout << "Largest Rectange width in histogram : " << ans;

  return 0;

  return 0;
}

// --------------------------------------------------------------------------------

// TODO : Maximal Rectangle :-
// * Link :- https://leetcode.com/problems/maximal-rectangle/submissions/1538491405/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangle(vector<int> &heights)
{
  int ans = 0;
  int index;
  stack<int> st;
  int n = heights.size();

  for (int i = 0; i < n; i++)
  {
    while (!st.empty() && heights[st.empty()] > heights[i])
    {
      index = st.top();
      st.pop();

      if (!st.empty())
      {
        ans = max(ans, heights[index] * (i - st.top() - 1));
      }
      else
      {
        ans = max(ans, heights[index] * i);
      }
    }

    st.push(i);
  }

  while (!st.empty())
  {
    index = st.top();
    st.pop();

    if (!st.empty())
    {
      ans = max(ans, heights[index] * (n - st.top() - 1));
    }
    else
    {
      ans = max(ans, heights[index] * n);
    }
  }

  return ans;
}

int maximalRectangle(vector<vector<char>> &matrix)
{
  int ans = 0;
  int row = matrix.size();
  int col = matrix[0].size();

  vector<int> heights(col, 0);

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (matrix[i][j] == '0')
      {
        heights[j] = 0;
      }
      else
      {
        heights[j] += 1;
      }
    }

    ans = max(ans, largestRectangle(heights));
  }

  return ans;
}

int main()
{
  vector<vector<char>> matrix = {
      {'1', '0', '1', '0', '0'},
      {'1', '0', '1', '1', '1'},
      {'1', '1', '1', '1', '1'},
      {'1', '0', '0', '1', '0'}};

  int ans = maximalRectangle(matrix);

  cout << "Maximal Rectange : " << ans;

  return 0;
}