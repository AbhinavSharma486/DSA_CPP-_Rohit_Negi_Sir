// TODO : Next Greater Element :-
// * Link : https://www.geeksforgeeks.org/problems/next-greater-element/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// & Method 1 :- Brute force method

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> nextLargerElement(vector<int> arr, int n)
// {
//   vector<int> ans(n, -1);

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[j] > arr[i])
//       {
//         ans[i] = arr[j];
//         break;
//       }
//     }
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {8, 6, 4, 7, 4, 9, 10, 8, 12};

//   int n = arr.size();

//   vector<int> ans = nextLargerElement(arr, n);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// ^ Method 2 :-

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// vector<int> nextLargerElement(vector<int> arr, int n)
// {
//   vector<int> ans(n, -1);
//   stack<int> st;

//   for (int i = 0; i < n; i++)
//   {
//     while (!st.empty() && arr[st.top()] < arr[i])
//     {
//       ans[st.top()] = arr[i];
//       st.pop();
//     }

//     st.push(i);
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {8, 6, 4, 7, 4, 9, 10, 8, 12};

//   int n = arr.size();

//   vector<int> ans = nextLargerElement(arr, n);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// * Method 3 :-

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// vector<int> nextLargerElement(vector<int> arr, int n)
// {
//   vector<int> ans(n, -1);
//   stack<int> st;

//   for (int i = n - 1; i >= 0; i--)
//   {
//     while (!st.empty() && arr[st.top()] < arr[i])
//     {
//       st.pop();
//     }

//     if (!st.empty())
//     {
//       ans[i] = arr[st.top()];
//     }

//     st.push(i);
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {8, 6, 4, 7, 4, 9, 10, 8, 12};

//   int n = arr.size();

//   vector<int> ans = nextLargerElement(arr, n);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// ---------------------------------------------------------------------------------

// TODO : Next Smaller Element :-
// * Link : https://www.naukri.com/code360/problems/next-smaller-element_1112581?leftPanelTabValue=PROBLEM

// &Method 1 : -Brute force method

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> nextSmallerElement(vector<int> arr, int n)
// {
//   vector<int> ans(n, -1);

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[j] < arr[i])
//       {
//         ans[i] = arr[j];
//         break;
//       }
//     }
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {7, 9, 12, 10, 14, 8, 3, 6, 9};

//   int n = arr.size();

//   vector<int> ans = nextSmallerElement(arr, n);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// ^ Method 2 :-

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// vector<int> nextSmallerElement(vector<int> arr, int n)
// {
//   vector<int> ans(n, -1);
//   stack<int> st;

//   for (int i = 0; i < n; i++)
//   {
//     while (!st.empty() && arr[st.top()] > arr[i])
//     {
//       ans[st.top()] = arr[i];
//       st.pop();
//     }

//     st.push(i);
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {7, 9, 12, 10, 14, 8, 3, 6, 9};

//   int n = arr.size();

//   vector<int> ans = nextSmallerElement(arr, n);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// * Method 3 :-

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// vector<int> nextSmallerElement(vector<int> arr, int n)
// {
//   vector<int> ans(n, -1);
//   stack<int> st;

//   for (int i = n - 1; i >= 0; i--)
//   {
//     while (!st.empty() && arr[st.top()] > arr[i])
//     {
//       st.pop();
//     }

//     if (!st.empty())
//     {
//       ans[i] = arr[st.top()];
//     }

//     st.push(i);
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {7, 9, 12, 10, 14, 8, 3, 6, 9};

//   int n = arr.size();

//   vector<int> ans = nextSmallerElement(arr, n);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// TODO : Smallest No. on left :-
// * Link :- https://www.geeksforgeeks.org/problems/smallest-number-on-left3403/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// ^ Method 1 :- Brute force method :-

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> leftSmaller(vector<int> arr, int n)
// {
//   vector<int> ans(n, -1);

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i - 1; j >= 0; j--)
//     {
//       if (arr[j] < arr[i])
//       {
//         ans[i] = arr[j];
//         break;
//       }
//     }
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {4, 13, 11, 5, 9, 7, 8, 6};
//   int n = arr.size();

//   vector<int> ans = leftSmaller(arr, n);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// & Method 2 :- using stack

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> leftSmaller(vector<int> arr, int n)
// {
//   vector<int> ans(n, -1);

//   stack<int> st;

//   for (int i = n - 1; i >= 0; i--)
//   {
//     while (!st.empty() && arr[st.top()] > arr[i])
//     {
//       ans[st.top()] = arr[i];
//       st.pop();
//     }

//     st.push(i);
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {4, 13, 11, 5, 9, 7, 8, 6};

//   int n = arr.size();

//   vector<int> ans = leftSmaller(arr, n);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// TODO : Next Greater Element 2 :-
// * Link :- https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// vector<int> nextGreaterElement2(vector<int> arr)
// {
//   int n = arr.size();

//   vector<int> ans(n, -1);

//   stack<int> st;

//   for (int i = 0; i < 2 * n - 1; i++)
//   {
//     while (!st.empty() && arr[st.top()] < arr[i % n])
//     {
//       ans[st.top()] = arr[i % n];
//       st.pop();
//     }
//     if (i < n)
//     {
//       st.push(i % n);
//     }
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> arr = {6, 10, 7, 4, 8, 9, 4};

//   vector<int> ans = nextGreaterElement2(arr);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }

// TODO : Stock Span problem :-
// * Link :- https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// vector<int> calculateSpan(vector<int> arr)
// {
//   int n = arr.size();

//   vector<int> ans(n);

//   stack<int> st;

//   for (int i = n - 1; i >= 0; i--)
//   {
//     while (!st.empty() && arr[i] > arr[st.top()])
//     {
//       ans[st.top()] = st.top() - i;
//       st.pop();
//     }

//     st.push(i);
//   }

//   while (!st.empty())
//   {
//     ans[st.top()] = st.top() + 1;
//     st.pop();
//   }

//   return ans;
// }

// int main()
// {

//   vector<int> arr = {100, 80, 60, 70, 60, 75, 85};

//   vector<int> ans = calculateSpan(arr);

//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }