// * Check Palindrome :-

// & Method 1 : Using 2 pointer approach

#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s)
{
  int start = 0, end = s.length() - 1;

  while (start < end)
  {
    if (s[start] != s[end])
    {
      return false;
    }
    start++;
    end--;
  }
  return true;
}

int main()
{
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  if (isPalindrome(str))
  {
    cout << str << " is a palindrome." << endl;
  }
  else
  {
    cout << str << " is not a palindrome." << endl;
  }

  return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
#include <string>
using namespace std;
bool FindPalindrome(string s, int start, int end)
{
  if (start >= end)
  {
    return true;
  }

  if (s[start] != s[end])
  {
    return false;
  }

  return FindPalindrome(s, start + 1, end - 1);
}
int main()
{
  string s;
  cout << "Enter string : ";
  getline(cin, s);

  int size = s.size();

  if (FindPalindrome(s, 0, size - 1))
  {
    cout << s << " is a palindrome." << endl;
  }
  else
  {
    cout << s << " is not a palindrome." << endl;
  }

  return 0;
}





// * Count Vowels :-

// & Method 1 : Using for loop

#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  cout << "Enter string : ";
  getline(cin, s);

  int count = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
      count++;
    }
  }
  cout << count;

  return 0;
}

// & Method 2 : Using Recursive approach

#include <iostream>
#include <string>
using namespace std;
int count(string s, int index)
{
  if (index == -1)
  {
    return 0;
  }

  if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
  {
    return 1 + count(s, index - 1);
  }
  else
  {
    return count(s, index - 1);
  }
}
int main()
{
  string s;
  cout << "Enter string : ";
  getline(cin, s);

  int index = s.size();
  int res = count(s, index);

  cout << res << " vowels are present in " << s;

  return 0;
}





// * Reverse a string

// & Method 1 : Using 2 Pointer approach

#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  cout << "Enter string : ";
  getline(cin, s);

  int start = 0, end = s.size() - 1;

  while (start < end)
  {
    swap(s[start], s[end]);
    start++;
    end--;
  }

  cout << s;
}

// & Method 2 : Using Recursive approach

#include <iostream>
#include <string>
using namespace std;
void RevString(string &s, int start, int end) // call by refrence
{
  if (start >= end)
  {
    return;
  }

  swap(s[start], s[end]);

  RevString(s, start + 1, end - 1);
}
int main()
{
  string s;
  cout << "Enter string : ";
  getline(cin, s);

  int end = s.size() - 1;

  RevString(s, 0, end);

  cout << s;

  return 0;
}





// * Lowercase to Uppercase :-

#include <iostream>
#include <string>
using namespace std;
void LowerToUpper(string &s, int index)
{
  if (index == -1)
  {
    return;
  }

  s[index] = 'A' + s[index] - 'a';

  LowerToUpper(s, index - 1);
}
int main()
{
  string s;
  cout << "Enter string : ";
  getline(cin, s);

  LowerToUpper(s, s.size() - 1);

  cout << s;

  return 0;
}