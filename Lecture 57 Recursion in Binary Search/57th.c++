// * Linear Search in Recursion

// & Method 1 : Using Recursive approach :- in this method we use 4 arguments

#include <iostream>
using namespace std;
bool LinearSearch(int arr[], int x, int index, int n)
{
  if (index == n)
  {
    return 0;
  }

  if (arr[index] == x)
  {
    return 1;
  }
  return LinearSearch(arr, x, index + 1, n);
}
int main()
{
  int n, x;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter x : ";
  cin >> x;

  if (LinearSearch(arr, x, 0, n))
  {
    cout << "Yes in the array";
  }
  else
  {
    cout << "No, it is not present in array";
  }
}

// & Method 2 : Using recursion and using 3 arguments only :- This method is design by me

#include <iostream>
using namespace std;
bool LinearSearch(int arr[], int x, int index)
{
  if (index == -1)
  {
    return 0;
  }

  if (arr[index] == x)
  {
    return 1;
  }
  return LinearSearch(arr, x, index - 1);
}
int main()
{
  int n, x;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter x : ";
  cin >> x;

  int index = sizeof(arr) / sizeof(arr[0]);

  if (LinearSearch(arr, x, index - 1))
  {
    cout << "Yes " << x << " present in the array";
  }
  else
  {
    cout << "No " << x << " it is not present in the array";
  }
}





// * Binary Search in Recursion :-

#include <iostream>
using namespace std;
bool BinarySearch(int arr[], int start, int end, int x)
{
  int mid = start + (end - start) / 2;

  if (mid == x)
  {
    return 1;
  }

  if (mid < x)
  {
    return (arr, start = mid + 1, end, x);
  }
  else
  {
    return (arr, start, end = mid - 1, x);
  }

  return false;
}

int main()
{
  int n, x;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter x : ";
  cin >> x;

  int size = sizeof(arr) / sizeof(arr[0]);

  if (BinarySearch(arr, 0, size - 1, x))
  {
    cout << "Yes " << x << " present in the array";
  }
  else
  {
    cout << "No " << x << " it is not present in the array";
  }
}