// * Print array using recursion :-

// & Method 1 : Using Recursion approach

#include <iostream>
using namespace std;
int print(int arr[], int index, int n)
{
  if (index == n)
  {
    return 0;
  }

  cout << arr[index] << " ";

  print(arr, index + 1, n);
}
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[50];
  cout << "Enter array elements : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  print(arr, 0, n);

  return 0;
}

// & Method 2 : Using Recursion with only 2 arguments

#include <iostream>
using namespace std;
int print(int arr[], int index)
{
  if (index == 0)
  {
    return 0;
  }

  cout << arr[index] << " ";

  print(arr, index - 1);
}
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[50];
  cout << "Enter array elements : ";
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  print(arr, n);

  return 0;
}





// * Print Reverse array using recursion :-

#include <iostream>
using namespace std;
int printReverse(int arr[], int index, int n)
{
  if (index == n)
  {
    return 0;
  }

  printReverse(arr, index + 1, n);

  cout << arr[index] << " ";
}
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[50];
  cout << "Enter array elements : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  printReverse(arr, 0, n);

  return 0;
}





// * Sum of all elements of array :-

// & Method 1 : Using Iterative approach

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[50];
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  cout << "Sum of all elements is : " << sum;

  return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
int SUM(int arr[], int index, int n)
{
  if (index == n)
  {
    return 0;
  }

  return arr[index] + SUM(arr, index + 1, n);
}
int main()
{

  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[50];
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int res = SUM(arr, 0, n);

  cout << res;

  return 0;
}

// & Method 3 : Using Recursion with only 2 arguments

#include <iostream>
using namespace std;
int SUM(int arr[], int index)
{
  if (index == 0)
  {
    return 0;
  }

  return arr[index] + SUM(arr, index - 1);
}
int main()
{

  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[50];
  cout << "Enter elements of array : ";
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  int res = SUM(arr, n);

  cout << res;

  return 0;
}





// * Find minimum element in array :-

// & Method 1 : Using Iterativa approach

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int minElement = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (arr[i] < minElement)
    {
      minElement = arr[i];
    }
  }

  cout << "The minimum element in the array is: " << minElement << endl;

  return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
using namespace std;
int minElementFinder(int arr[], int index, int n)
{
  if (index == n)
  {
    return arr[index];
  }

  return min(arr[index], minElementFinder(arr, index + 1, n));
}
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array : ";
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  int res = minElementFinder(arr, 1, n);

  cout << res;

  return 0;
}

// & Method 3 : Using Recursion with only 2 arguments

#include <iostream>
using namespace std;
int minElementFinder(int arr[], int index)
{
  if (index == 0)
  {
    return arr[index];
  }

  return min(arr[index], minElementFinder(arr, index - 1));
}
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array : ";
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  int res = minElementFinder(arr, n);

  cout << res;

  return 0;
}