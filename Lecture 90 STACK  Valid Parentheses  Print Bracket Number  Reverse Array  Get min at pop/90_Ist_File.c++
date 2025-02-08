// TODO 1 :- Reverse String using Stack
// * Link :- https://leetcode.com/problems/reverse-string/submissions/1166998640/

// #include <iostream>
// #include <vector>
// #include <stack>
// #include <string>
// using namespace std;
// int main()
// {
//   vector<string> s;
//   s.push_back("hello");

//   for (int i = 0; i < s.size(); i++)
//   {
//     cout << "Original string : " << s[i] << endl;
//   }

//   stack<char> st;

//   // & Push characters of the first string in to the stack
//   for (char c : s[0])
//   {
//     st.push(c);
//   }

//   string reversed;
//   while (!st.empty())
//   {
//     reversed += st.top();
//     st.pop();
//   }

//   s[0] = reversed;

//   cout << "Reversed string : " << s[0] << endl;

//   return 0;
// }

// TODO 2 :- Insert at Bottom
// * Link :- https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1?page=2&category=Stack&difficulty=Easy&sortBy=submissions

// #include <iostream>
// #include <stack>
// using namespace std;

// // Function to print stack elements without modifying the original stack
// void printStack(stack<int> st)
// {
//   stack<int> temp; // vector to store the elements

//   // Transfer elements from the stack to vector
//   while (!st.empty())
//   {
//     temp.push(st.top());
//     st.pop();
//   }

//   // Print elements in reverse order (original stack order)
//   while (!temp.empty())
//   {
//     cout << temp.top() << " ";
//     st.push(temp.top());
//     temp.pop();
//   }

//   cout << endl;
// }

// int main()
// {
//   int x = 2;

//   stack<int> st;

//   st.push(8);
//   st.push(1);
//   st.push(2);
//   st.push(3);
//   st.push(4);

//   cout << "Stack Elements before insertion : ";
//   printStack(st);

//   // making a new stack(temp)
//   stack<int> temp;

//   // move all elements from st to temp
//   while (!st.empty())
//   {
//     temp.push(st.top());
//     st.pop();
//   }

//   // push x into temp
//   st.push(x);

//   // restore elements to the original stack
//   while (!temp.empty())
//   {
//     st.push(temp.top());
//     temp.pop();
//   }

//   cout << "Stack Elements after insertion x at bottom : ";
//   printStack(st);

//   return 0;
// }

// TODO 3 :- Make the array beautiful :-
// * Link :- Make the array beautiful :- https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
// int main()
// {
//   vector<int> arr = {2, 3, 5, -4, 6, -2, -8, 9};

//   cout << "Array without beautiful : ";

//   for (int i = 0; i < arr.size(); i++)
//   {
//     cout << arr[i] << " ";
//   }

//   cout << endl;

//   stack<int> s;
//   for (int i = 0; i < arr.size(); i++)
//   {
//     // agar stack empty hai to array ka first element store kre
//     if (s.empty())
//     {
//       s.push(arr[i]);
//     }
//     // check kre ke arr[i] ke value 0 se badi hai
//     else if (arr[i] >= 0)
//     {
//       // agar stack ke top ke value 0 se badi hai
//       if (s.top() >= 0)
//       {
//         // to stack me arr[i] ke value push kr de
//         s.push(arr[i]);
//       }
//       else
//       // agar 0 se badi nhi hai to stack ke value ko pop kre
//       {
//         s.pop();
//       }
//     }
//     // check kre ke arr[i] ke value 0 se choti hai
//     else
//     {
//       // agar stack ke top ke value 0 se choti hai
//       if (s.top() < 0)
//       {
//         // to stack me arr[i] ke value push kre
//         s.push(arr[i]);
//       }
//       // agar stack ke top ke value 0 se badi hai to
//       else
//       {
//         // stack ke top ke value pop kre
//         s.pop();
//       }
//     }
//   }

//   // new vector banaya
//   vector<int> ans(s.size());
//   // i ke andar stack ke size ke value store kre
//   int i = s.size() - 1;

//   // jb tk stack empty nhi ho jata tb tk stack ke value vector ans me store kre
//   while (!s.empty())
//   {
//     ans[i] = s.top();
//     i--;
//     s.pop();
//   }

//   cout << "Array after beautiful : ";

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }
// }

// TODO 4 :- String Manipulation :-
// * Link :- https://www.geeksforgeeks.org/problems/string-manipulation3706/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

// & This method teach by Rohit Negi sir but it give wrong answer in vscode but gives correct answer in gfg

// #include <iostream>
// #include <vector>
// #include <stack>
// #include <algorithm>
// using namespace std;
// int main()
// {
//   vector<string> arr = {"ab", "ac", "da", "ac", "db", "ea"};

//   cout << "String before Manipulation : ";

//   for (int i = 0; i < arr.size(); i++)
//   {
//     cout << arr[i] << " ";
//   }

//   cout << endl;

//   stack<string> s;

//   for (int i = 0; i < arr.size(); i++)
//   {
//     // if stack is empty , push the first element of arr
//     if (s.empty())
//     {
//       s.push(arr[i]);
//     }
//     // if top element of stack == arr[i]
//     else if (s.top() == arr[i])
//     {
//       s.pop();
//     }
//     else
//     {
//       s.push(arr[i]);
//     }
//   }

//   int finalStackSize = s.size();
//   cout << "Final Stack Size : " << finalStackSize << endl;
//   cout << "My code is correct and the answer is 4 but my terminal shows 6 ";

//   return 0;
// }

// * This code generate by chatgpt gives correct answer but using unordered map

// #include <iostream>
// #include <vector>
// #include <stack>
// #include <unordered_map>
// #include <algorithm>
// using namespace std;

// int main()
// {
//   vector<string> arr = {"ab", "ac", "da", "ac", "db", "ea"};

//   cout << "String before Manipulation: ";
//   for (const string &str : arr)
//   {
//     cout << str << " ";
//   }
//   cout << endl;

//   stack<string> s;
//   unordered_map<string, int> elementCount;

//   for (const string &str : arr)
//   {
//     // Increase the count of the current element
//     elementCount[str]++;

//     // Push the element onto the stack if it's not already present
//     if (elementCount[str] == 1)
//     {
//       s.push(str);
//     }
//     // If the element is repeated, remove it from the stack
//     else
//     {
//       stack<string> temp;
//       // Remove all occurrences of the repeated element
//       while (!s.empty() && s.top() != str)
//       {
//         temp.push(s.top());
//         s.pop();
//       }
//       if (!s.empty())
//       {
//         s.pop(); // Remove the element itself
//       }
//       // Restore other elements back to the stack
//       while (!temp.empty())
//       {
//         s.push(temp.top());
//         temp.pop();
//       }
//     }
//   }

//   // Final stack size
//   cout << "Final Stack Size: " << s.size() << endl;

//   // Print the remaining elements in the stack (LIFO order)
//   vector<string> remainingElements;
//   while (!s.empty())
//   {
//     remainingElements.push_back(s.top());
//     s.pop();
//   }
//   reverse(remainingElements.begin(), remainingElements.end());

//   cout << "Remaining Elements in Stack: ";
//   for (const string &element : remainingElements)
//   {
//     cout << element << " ";
//   }
//   cout << endl;

//   return 0;
// }

// TODO 5 :- Parenthesis is valid or not :-

// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;

// bool check(string &str)
// {
//   stack<char> s;

//   for (int i = 0; i < str.size(); i++)
//   {
//     // if str[i] == '('
//     if (str[i] == '(')
//     {
//       // then push into stack
//       s.push(str[i]);
//     }
//     // if not
//     else
//     {
//       // if stack is empty then return 0
//       if (s.empty())
//       {
//         return 0;
//       }
//       // if anything is in the stack then pop out it
//       else
//       {
//         s.pop();
//       }
//     }
//   }

//   return s.empty();
// }

// int main()
// {
//   string str = "((()))";

//   if (!check(str))
//   {
//     cout << "Parenthesis is not valid";
//   }
//   else
//   {
//     cout << "Parenthesis is valid";
//   };

//   return 0;
// }

// TODO 6 :- Minimun add to make parenthesis valid (Leetcode) :-
// * Link :- https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/1167016465/?source=submission-ac

// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;

// int minAddToMakeValid(string s)
// {
//   stack<char> st;
//   int count = 0;

//   for (int i = 0; i < s.size(); i++)
//   {
//     if (s[i] == '(')
//     {
//       st.push(s[i]);
//     }
//     else
//     {
//       if (st.empty())
//       {
//         count++;
//       }
//       else
//       {
//         st.pop();
//       }
//     }
//   }

//   return count + st.size();
// }

// int main()
// {
//   string str = "((((())";

//   int result = minAddToMakeValid(str);

//   cout << "Minimum parenthesis add to make valid : " << result;
// }

// TODO 7 :- Valid Parenthesis :-
// * Link :-

// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;

// bool isValid(string s)
// {
//   stack<char> st;

//   for (int i = 0; i < s.size(); i++)
//   {
//     if (s[i] == '(' || s[i] == '{' || s[i] == '[')
//     {
//       st.push(s[i]);
//     }
//     else
//     {
//       if (st.empty())
//       {
//         return 0;
//       }
//       else if (s[i] == ')')
//       {
//         if (st.top() != '(')
//         {
//           return 0;
//         }
//         else
//         {
//           st.pop();
//         }
//       }
//       else if (s[i] == '}')
//       {
//         if (st.top() != '{')
//         {
//           return 0;
//         }
//         else
//         {
//           st.pop();
//         }
//       }
//       else if (s[i] == ']')
//       {
//         if (st.top() != '[')
//         {
//           return 0;
//         }
//         else
//         {
//           st.pop();
//         }
//       }
//     }
//   }

//   return st.empty();
// }

// int main()
// {
//   // string s = "[]{()}{[)}";
//   string s = "(()){}[()]";

//   if (isValid(s))
//   {
//     cout << "Yes it is valid parentheses";
//   }
//   else
//   {
//     cout << "No, it is not valid parentheses";
//   }

//   return 0;
// }

// TODO 8 :- Backspace string compare :-
// * Link :- https://leetcode.com/problems/backspace-string-compare/description

// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;

// bool backSpaceCompare(string s, string t)
// {
//   stack<char> stacks;
//   stack<char> stackt;

//   for (int i = 0; i < s.size(); i++)
//   {
//     if (s[i] == '#')
//     {
//       if (!stacks.empty())
//       {
//         stacks.pop();
//       }
//     }
//     else
//     {
//       stacks.push(s[i]);
//     }
//   }

//   for (int i = 0; i < t.size(); i++)
//   {
//     if (t[i] == '#')
//     {
//       if (!stackt.empty())
//       {
//         stackt.pop();
//       }
//     }
//     else
//     {
//       stackt.push(t[i]);
//     }
//   }

//   return stacks == stackt;
// }

// int main()
// {
//   // string s = "ab#c";
//   // string t = "ad#c";

//   string s = "ab##";
//   string t = "c#d#";

//   if (backSpaceCompare(s, t))
//   {
//     cout << "Both s and t are same";
//   }
//   else
//   {
//     cout << "Both s and t are different";
//   }

//   return 0;
// }

// TODO 9 :- Print Bracket Number :-
// * Link :- https://www.geeksforgeeks.org/problems/print-bracket-number4058/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

// #include <iostream>
// #include <string>
// #include <stack>
// #include <vector>
// using namespace std;

// vector<int> BracketNumbers(string S)
// {
//   stack<int> st;
//   vector<int> ans;

//   int count = 0;

//   for (int i = 0; i < S.size(); i++)
//   {
//     if (S[i] == '(')
//     {
//       count++;
//       st.push(count);
//       ans.push_back(count);
//     }
//     else if (S[i] == ')')
//     {
//       ans.push_back(st.top());
//       st.pop();
//     }
//   }

//   return ans;
// }

// int main()
// {
//   string S = "(aa(bdc))p(de)";

//   vector<int> result = BracketNumbers(S);

//   cout << "Bracket Numbers are : ";

//   for (int i = 0; i < result.size(); i++)
//   {
//     cout << result[i];
//   }
// }

// TODO 10 :- Get Minimum at POP :-
// * Link :- https://www.geeksforgeeks.org/problems/get-min-at-pop/1?page=1&category=Stack&difficulty=Easy&sortBy=submissions

// #include <iostream>
// #include <string>
// #include <stack>
// #include <array>
// using namespace std;

// stack<int> pushIntoStack(int arr[], int n)
// {
//   stack<int> st;

//   for (int i = 0; i < n; i++)
//   {
//     if (i == 0)
//     {
//       st.push(arr[i]);
//     }
//     else
//     {
//       st.push(min(arr[i], st.top()));
//     }
//   }

//   return st;
// }

// void getMinAtPop(stack<int> s)
// {
//   while (!s.empty())
//   {
//     cout << s.top() << " ";
//     s.pop();
//   }
// }

// int main()
// {
//   int arr[] = {2, 1, 3, 5, 0, 6};
//   int sizeOfArr = sizeof(arr) / sizeof(arr[0]);

//   stack<int> s = pushIntoStack(arr, sizeOfArr);

//   getMinAtPop(s);
// }
