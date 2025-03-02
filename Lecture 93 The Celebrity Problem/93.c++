// TODO : The Celebrity Problem :-
// * Link :- https://www.geeksforgeeks.org/problems/the-celebrity-problem/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int celebrity(vector<vector<int>> &arr, int n)
{
  stack<int> st;

  for (int i = n - 1; i >= 0; i--)
  {
    st.push(i);
  }

  int first, second;

  while (st.size() > 1)
  {
    first = st.top();
    st.pop();

    second = st.top();
    st.pop();

    if (arr[first][second] && !arr[second][first])
    {
      st.push(second);
    }
    else if (!arr[first][second] && arr[second][first])
    {
      st.push(first);
    }
  }

  if (st.empty())
  {
    return -1;
  }

  int num = st.top();
  st.pop();

  int row = 0, col = 0;

  for (int i = 0; i < n; i++)
  {
    row += arr[num][i];
    col += arr[i][num];
  }

  return (row == 0 && col == n - 1) ? num : -1;
}

int main()
{
  vector<vector<int>> arr = {
      {0, 1, 0, 1, 1},
      {0, 0, 0, 1, 1},
      {0, 1, 0, 1, 0},
      {0, 0, 0, 0, 0},
      {1, 0, 1, 1, 0}};

  int row = arr.size();

  int ans = celebrity(arr, row);

  if (ans == -1)
  {
    cout << "Celebrity not exists  " << endl;
  }
  else
  {
    cout << "Celebrity is : " << ans;
  }

  return 0;
}