// * Perfect Sum :-

// & Methdo 1 : Using 4 arguments

#include <iostream>
using namespace std;
int noOfSubset(int arr[], int index, int sum, int n)
{
  if (index == n)
  {
    if (sum == 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  return noOfSubset(arr, index + 1, sum, n) + noOfSubset(arr, index + 1, sum - arr[index], n);
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

  int sum;
  cout << "Enter value of sum : ";
  cin >> sum;

  int res = noOfSubset(arr, 0, sum, n);

  cout << "The array has " << res << " subsets whose sum is " << sum;

  return 0;
}



// & Methdo 2 : Using 3 arguments

#include <iostream>
#include <vector>
using namespace std;
int noOfSubset(int arr[], int index, int sum)
{
  if (index == -1)
  {
    if (sum == 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  return noOfSubset(arr, index - 1, sum) + noOfSubset(arr, index - 1, sum - arr[index]);
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

  int sum;
  cout << "Enter value of sum : ";
  cin >> sum;

  int res = noOfSubset(arr.data(), arr.size(), sum);

  cout << "The array has " << res << " subsets whose sum is " << sum;

  return 0;
}






// * Target Sum Repetition :-

// & Method 1 : Using 4 arguments

#include <iostream>
using namespace std;
int subsum(int arr[], int index, int n, int sum)
{
  if (sum == 0)
  {
    return 1;
  }
  if (index == n || sum < 0)
  {
    return 0;
  }

  return subsum(arr, index + 1, n, sum) + subsum(arr, index, n, sum - arr[index]);
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

  int sum;
  cout << "Enter value of sum : ";
  cin >> sum;

  int res = subsum(arr, 0, n, sum);

  cout << "The array has " << res << " subsets whose sum is " << sum;

  return 0;
}



// & Method 2 : Using 3 arguments

#include <iostream>
#include <vector>
using namespace std;
int subsum(int arr[], int index, int sum)
{
  if (sum == 0)
  {
    return 1;
  }
  if (index == -1 || sum < 0)
  {
    return 0;
  }

  return subsum(arr, index - 1, sum) + subsum(arr, index, sum - arr[index]);
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

  int sum;
  cout << "Enter value of sum : ";
  cin >> sum;

  int res = subsum(arr.data(), arr.size() - 1, sum);

  cout << "The array has " << res << " subsets whose sum is " << sum;

  return 0;
}