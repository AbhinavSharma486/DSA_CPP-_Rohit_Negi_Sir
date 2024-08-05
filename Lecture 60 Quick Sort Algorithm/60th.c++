// & Quick Merge Sort Algorithm Code :-

// ^ Method 1 : Output will be in asccending order

#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
  // pos indicates the correct position of pivot element
  int pos = start;

  // comparing elements with pivot element and arranging them in correct way
  for (int i = start; i <= end; i++)
  {
    if (arr[i] <= arr[end])
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  // returing the correct position of pivot element
  return pos - 1;
}

void quickSort(int arr[], int start, int end)
{
  // Base case
  if (start >= end)
  {
    return;
  }

  // finding pivot element and sorting the elements
  int pivot = partition(arr, start, end);

  // dividing array into 2 parts

  // left side of pivot element
  quickSort(arr, start, pivot - 1);

  // right side of pivot element
  quickSort(arr, pivot + 1, end);
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

  cout << "Array before quick sort : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  int start = 0, end = n - 1;

  quickSort(arr, start, end);

  cout << "Array after quick sort : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}

// & Homework :-

// ^ Method 2 : Output will be in descending order

#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
  // pos indicates the correct position of pivot element
  int pos = start;

  // comparing elements with pivot element and arranging them in correct way
  for (int i = start; i <= end; i++)
  {
    if (arr[i] >= arr[end])
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  // returing the correct position of pivot element
  return pos - 1;
}

void quickSort(int arr[], int start, int end)
{
  // Base case
  if (start >= end)
  {
    return;
  }

  // finding pivot element and sorting the elements
  int pivot = partition(arr, start, end);

  // dividing array into 2 parts

  // left side of pivot element
  quickSort(arr, start, pivot - 1);

  // right side of pivot element
  quickSort(arr, pivot + 1, end);
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

  cout << "Array before quick sort : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  int start = 0, end = n - 1;

  quickSort(arr, start, end);

  cout << "Array after quick sort : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}