// & Merge Sort using Recursion

// ^ Method 1 : Output will be In Increasing order

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int end, int mid)
{
  // difine a temp vector and store sorted array elements in it
  vector<int> temp(end - start + 1);

  int left = start, right = mid + 1, index = 0;

  // sorting elements from left and right part of array and stored in temp vector
  while (left <= mid && right <= end)
  {
    if (arr[left] <= arr[right])
    {
      temp[index] = arr[left];
      index++;
      left++;
    }
    else
    {
      temp[index] = arr[right];
      index++;
      right++;
    }
  }

  // left array me agar element bache hue hai
  while (left <= mid)
  {
    temp[index] = arr[left];
    index++;
    left++;
  }

  // right array me agar element bache hue hai
  while (right <= end)
  {
    temp[index] = arr[right];
    index++;
    right++;
  }

  // index ko 0 kr diya kyuki ab hm temp vector ke elements ko array me daal rhe hai
  index = 0;
  while (start <= end)
  {
    arr[start] = temp[index];
    start++;
    index++;
  }
}

void mergeSort(int arr[], int start, int end)
{
  // Base case
  if (start >= end)
  {
    return;
  }

  // finding mid
  int mid = start + (end - start) / 2;

  // Dividing array into 2 parts

  // dividing left part of array
  mergeSort(arr, start, mid);

  // dividing right part of array
  mergeSort(arr, mid + 1, end);

  // merging the divided part
  merge(arr, start, end, mid);
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

  int start = 0, end = n - 1;

  mergeSort(arr, start, end);

  cout << "Sorted array : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}





// & Homework :-

// ^ Method 2 : Output will be In Decreasing order

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int end, int mid)
{
  // difine a temp vector and store sorted array elements in it
  vector<int> temp(end - start + 1);

  int left = start, right = mid + 1, index = 0;

  // sorting elements from left and right part of array and stored in temp vector
  while (left <= mid && right <= end)
  {
    if (arr[left] >= arr[right])
    {
      temp[index] = arr[left];
      index++;
      left++;
    }
    else
    {
      temp[index] = arr[right];
      index++;
      right++;
    }
  }

  // left array me agar element bache hue hai
  while (left <= mid)
  {
    temp[index] = arr[left];
    index++;
    left++;
  }

  // right array me agar element bache hue hai
  while (right <= end)
  {
    temp[index] = arr[right];
    index++;
    right++;
  }

  // index ko 0 kr diya kyuki ab hm temp vector ke elements ko array me daal rhe hai
  index = 0;
  while (start <= end)
  {
    arr[start] = temp[index];
    start++;
    index++;
  }
}

void mergeSort(int arr[], int start, int end)
{
  // Base case
  if (start >= end)
  {
    return;
  }

  // finding mid
  int mid = start + (end - start) / 2;

  // Dividing array into 2 parts

  // dividing left part of array
  mergeSort(arr, start, mid);

  // dividing right part of array
  mergeSort(arr, mid + 1, end);

  // merging the divided part
  merge(arr, start, end, mid);
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

  int start = 0, end = n - 1;

  mergeSort(arr, start, end);

  cout << "Sorted array : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}