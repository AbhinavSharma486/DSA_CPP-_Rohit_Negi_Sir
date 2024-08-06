// * 78. Subsets

// ^ Note :- Given an integer array arr of unique elements, return all possible subsets(the power set). The solution set must not contain duplicate subsets.Return the solution in any order.

// & Method 1 : Using 5 arguments

#include <iostream>
#include <vector>
using namespace std;

void subseq(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)
{
  if (index == n)
  {
    ans.push_back(temp);
    return;
  }

  subseq(arr, index + 1, n, ans, temp);
  temp.push_back(arr[index]);
  subseq(arr, index + 1, n, ans, temp);
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

  vector<vector<int>> ans;

  vector<int> temp;

  subseq(arr.data(), 0, n, ans, temp);

  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << "{ " << ans[i][j] << " } ";
    }
    cout << endl;
  }

  return 0;
}



// & Method 2 : Using only 4 arguments

#include <iostream>
#include <vector>
using namespace std;

void subseq(int arr[], int index, vector<vector<int>> &ans, vector<int> &temp)
{
  if (index == -1)
  {
    ans.push_back(temp);
    return;
  }

  subseq(arr, index - 1, ans, temp);
  temp.push_back(arr[index]);
  subseq(arr, index - 1, ans, temp);
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

  vector<vector<int>> ans;

  vector<int> temp;

  subseq(arr.data(), arr.size() - 1, ans, temp);

  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << "{ " << ans[i][j] << " } ";
    }
    cout << endl;
  }

  return 0;
}





// * Print all subsets of string :-

// & Method 1 : Using 5 arguments

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subseq(string s, int index, int n, vector<string> &ans, string &temp)
{
  if (index == n)
  {
    ans.push_back(temp);
    return;
  }

  // Not included
  subseq(s, index + 1, n, ans, temp);
  // Included
  temp.push_back(s[index]);
  subseq(s, index + 1, n, ans, temp);
  temp.pop_back();
}
int main()
{
  string s;
  cout << "Enter string : ";
  getline(cin, s);

  vector<string> ans;

  string temp;

  subseq(s, 0, s.size(), ans, temp);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << "{" << ans[i] << "} " << endl;
  }

  return 0;
}



// & Method 2 : Using 4 arguments

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subseq(string s, int index, vector<string> &ans, string &temp)
{
  if (index == -1)
  {
    ans.push_back(temp);
    return;
  }

  // Not Included
  subseq(s, index - 1, ans, temp);
  // Included
  temp.push_back(s[index]);
  subseq(s, index - 1, ans, temp);
  temp.pop_back();
}
int main()
{
  string s;
  cout << "Enter string : ";
  getline(cin, s);

  vector<string> ans;

  string temp;

  subseq(s, s.size() - 1, ans, temp);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << "{" << ans[i] << "} " << endl;
  }
  return 0;
}






// * Generate Parentheses :-

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateParentheses(int n, int left, int right, vector<string> &ans, string &temp)
{
  if (left + right == 2 * n)
  {
    ans.push_back(temp);
    return;
  }

  // left parentheses
  if (left < n)
  {
    temp.push_back('(');
    generateParentheses(n, left + 1, right, ans, temp);
    temp.pop_back();
  }

  // right parentheses
  if (right < left)
  {
    temp.push_back(')');
    generateParentheses(n, left, right + 1, ans, temp);
    temp.pop_back();
  }
}

int main()
{
  int n;
  cout << "Enter size of parentheses : ";
  cin >> n;

  vector<string> ans;

  string temp;

  generateParentheses(n, 0, 0, ans, temp);

  cout << "Expected parentheses are : " << endl;

  for (int i = 0; i < ans.size(); i++)
  {
    cout << "{" << ans[i] << "} " << endl;
  }

  return 0;
}