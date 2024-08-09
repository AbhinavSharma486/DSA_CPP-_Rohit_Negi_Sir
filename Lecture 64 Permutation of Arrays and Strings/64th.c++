// * Permutation :-

// & Method 1 : Using recursive approach with using 4 arguments

#include <iostream>
#include <vector>
using namespace std;

void permute(int arr[], vector<vector<int>> &ans, vector<int> temp, vector<bool> &visited)
{
  if (visited.size() == temp.size())
  {
    ans.push_back(temp);
    return;
  }
  for (int i = 0; i < visited.size(); i++)
  {
    if (visited[i] == 0)
    {
      visited[i] = 1;

      temp.push_back(arr[i]);

      permute(arr, ans, temp, visited);

      visited[i] = 0;

      temp.pop_back();
    }
  }
}

int main()
{
  int n;
  cout << "Enter n : ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<vector<int>> ans;

  vector<int> temp;

  vector<bool> visited(n, 0);

  permute(arr, ans, temp, visited);

  cout << "Permutations:\n";
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

// & Method 2 : Optimizing approach and swapping approach and using 3 arguments

#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &arr, vector<vector<int>> &ans, int index)
{
  if (index == arr.size())
  {
    ans.push_back(arr);
    return;
  }

  for (int i = index; i < arr.size(); i++)
  {
    swap(arr[i], arr[index]);

    permute(arr, ans, index + 1);

    swap(arr[i], arr[index]);
  }
}

int main()
{
  int n;
  cout << "Enter n : ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<vector<int>> ans;

  permute(arr, ans, 0);

  cout << "Possible Permutations are :\n";
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}