// * Predict the winner :-

// & Method 1 : we i achieve O(n^2) time complexity

#include <iostream>
#include <vector>
using namespace std;

int winner(vector<bool> &person, int n, int index, int person_left, int k)
{
  if (person_left == 1)
  {
    for (int i = 0; i < n; i++)
    {
      if (person[i] == 0)
      {
        return i;
      }
    }
  }

  int kill = (k - 1) % person_left;

  while (kill--)
  {
    index = (index + 1) % n;

    while (person[index] == 1)
    {
      index = (index + 1) % n;
    }
  }

  person[index] = 1;
  person_left--;

  while (person[index] == 1)
  {
    index = (index + 1) % n;
  }

  return winner(person, n, index, person_left, k);
}

int main()
{
  int n;
  cout << "Enter n : ";
  cin >> n;

  int k;
  cout << "Enter kill : ";
  cin >> k;

  vector<bool> person(n, 0);

  int res = winner(person, n, 0, n, k) + 1;

  cout << "The winner is person at position : " << res;

  return 0;
}



// & Method 2 : we i achieve O(n) time complexity

#include <iostream>
using namespace std;

int winner(int n, int k)
{
  if (n == 1)
  {
    return 0;
  }

  return (winner(n - 1, k) + k) % n;
}

int main()
{
  int n;
  cout << "Enter n : ";
  cin >> n;

  int k;
  cout << "Enter kill : ";
  cin >> k;

  int res = winner(n, k);

  cout << "The winner is person at position : " << res;

  return 0;
}
