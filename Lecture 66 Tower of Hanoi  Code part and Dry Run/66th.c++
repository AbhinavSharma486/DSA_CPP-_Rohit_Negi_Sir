// * Tower of Hanoi :-

#include <iostream>
using namespace std;
void TowerOfHanoi(int n, int source, int helper, int destination, int &stepCount)
{
  if (n == 1)
  {
    stepCount++;
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    return;
  }

  TowerOfHanoi(n - 1, source, destination, helper, stepCount);

  stepCount++;
  cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;

  TowerOfHanoi(n - 1, helper, source, destination, stepCount);
}
int main()
{
  int n;
  cout << "Enter no. of disk : ";
  cin >> n;

  int source = 1, helper = 2, destination = 3, stepCount = 0;

  TowerOfHanoi(n, source, helper, destination, stepCount);

  cout << "Total number of steps: " << stepCount << endl;

  return 0;
}