// * Permutation 2 :-

#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> arr, vector<vector<int>> &ans, int index)
{
  if (index == arr.size())
  {
    ans.push_back(arr);
    return;
  }

  vector<bool> use(21, 0);

  for (int i = index; i < arr.size(); i++)
  {
    if (use[arr[i] + 10] == 0)
    {
      swap(arr[index], arr[i]);

      permute(arr, ans, index + 1);

      swap(arr[index], arr[i]);

      use[arr[i] + 10] = 1;
    }
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

  cout << "Permutations are : " << endl;

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





// * Ways to Sum N :-

#include <iostream>
#include <vector>
using namespace std;

int waysToSum(vector<int> arr, int size, int sum)
{
  if (sum == 0)
  {
    return 1;
  }
  if (sum < 0)
  {
    return 0;
  }

  int ans = 0;

  for (int i = 0; i < size; i++)
  {
    ans += waysToSum(arr, size, sum - arr[i]);
  }

  return ans;
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

  int sum;
  cout << "Enter sum : ";
  cin >> sum;

  int result = waysToSum(arr, arr.size(), sum);

  cout << "Number of ways to sum: " << result << endl;

  return 0;
}