// * Rat in a maze :-

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};
string dir = "UDLR";

bool valid(int i, int j, int n)
{
  return i >= 0 && j >= 0 && i < n && j < n;
}

void Total(vector<vector<int>> &matrix, int i, int j, int n, string &path, vector<string> &ans, vector<vector<bool>> &visited)
{
  if (i == n - 1 && j == n - 1)
  {
    ans.push_back(path);
    return;
  }

  visited[i][j] = 1;

  for (int k = 0; k < 4; k++)
  {
    if (
        valid(i + row[k], j + col[k], n) &&
        matrix[i + row[k]][j + col[k]] &&
        !visited[i + row[k]][j + col[k]])
    {
      path.push_back(dir[k]);

      Total(matrix, i + row[k], j + col[k], n, path, ans, visited);

      path.pop_back();
    }
  }

  visited[i][j] = 0;
}

int main()
{
  int rows, cols;
  cout << "Enter no. of rows : ";
  cin >> rows;

  cout << "Enter no. of cols : ";
  cin >> cols;

  vector<vector<int>> arr(rows, vector<int>(cols));
  cout << "Enter elements of array : " << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr[i][j];
    }
  }

  vector<vector<bool>> visited(rows, vector<bool>(cols, 0));
  vector<string> ans;
  string path;

  if (arr[0][0] == 0 || arr[rows - 1][cols - 1] == 0)
  {
    cout << "No valid path exists." << endl;
    return 0;
  }

  Total(arr, 0, 0, rows, path, ans, visited);

  cout << "All possible paths from top left to bottom right : " << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << i + 1 << " " << ans[i] << " " << endl;
  }

  return 0;
}