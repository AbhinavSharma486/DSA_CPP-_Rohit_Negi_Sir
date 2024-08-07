// * Print Subsets Sum :-

// & Method 1 : Print only Sum of subsets

#include <iostream>
using namespace std;
void print(int arr[], int index, int n, int sum)
{
  if (index == n)
  {
    cout << sum << endl;
    return;
  }

  // If not include
  print(arr, index + 1, n, sum);
  // If include
  print(arr, index + 1, n, sum + arr[index]);
}
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int sum = 0;

  print(arr, 0, n, sum);

  return 0;
}

// ^ Homework :-

// & Method 2 : Printing subsets with subsets sum

#include <iostream>
#include <vector>
using namespace std;
void print(int arr[], int index, int n, int sum, vector<int> &ans2)
{
  if (index == n)
  {
    ans2.push_back(sum);
    return;
  }

  // If not include
  print(arr, index + 1, n, sum, ans2);
  // If include
  print(arr, index + 1, n, sum + arr[index], ans2);
}

void subseq(int arr[], int index, int n, vector<vector<int>> &ans1, vector<int> &temp)
{
  if (index == n)
  {
    ans1.push_back(temp);
    return;
  }

  subseq(arr, index + 1, n, ans1, temp);
  temp.push_back(arr[index]);
  subseq(arr, index + 1, n, ans1, temp);
  temp.pop_back();
}
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<vector<int>> ans1;

  vector<int> ans2;

  vector<int> temp;

  subseq(arr.data(), 0, n, ans1, temp);

  int sum = 0;

  print(arr.data(), 0, n, sum, ans2);

  for (int i = 0; i < ans1.size() && ans2.size(); i++)
  {
    for (int j = 0; j < ans1[i].size(); j++)
    {
      cout << "{ " << ans1[i][j] << " }";
    }
    {
      cout << " = " << ans2[i];
    }
    cout << endl;
  }

  return 0;
}

// * Target Sum :-

#include <iostream>
using namespace std;
bool find(int arr[], int index, int n, int target)
{
  if (target == 0)
  {
    return 1;
  }

  if (index == n || target < 0)
  {
    return 0;
  }

  return find(arr, index + 1, n, target) || find(arr, index + 1, n, target - arr[index]);
}
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int target;
  cout << "Enter target value : ";
  cin >> target;

  // find(arr, 0, n, target);

  if (find(arr, 0, n, target))
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }

  return 0;
}