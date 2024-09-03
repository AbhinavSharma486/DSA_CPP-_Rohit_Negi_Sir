// * File Handling :-

// & Open a existing file or if it is not presend then it will create it and open it and then it write someting in it.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  // ~ File ko open karna
  ofstream fout;

  fout.open("zoom.txt"); // ? agar file present nhi hue to yeh apne aap automatically create kr dega and open kr lega

  // ^ write kar sakta hu
  fout << "Hellow Abhinav";

  fout.close(); // ^ Resources release kr paunga
}





// & Open a existing file and read it and output the result

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream fin;

  // ^ file ko open kro
  fin.open("zoom.txt");

  // ^ file read kro
  char c;

  c = fin.get();

  while (!fin.eof())
  {
    cout << c;

    c = fin.get();
  }

  fin.close();
}





// & sorting of a data :-

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> arr(5);
  cout << "Enter the input : ";
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  // ^ file ko open kro
  ofstream fout;
  fout.open("zero.txt");

  fout << "Original data : " << endl;

  for (int i = 0; i < 5; i++)
  {
    fout << arr[i] << " ";
  }

  fout << "\nSorter data : " << endl;

  sort(arr.begin(), arr.end());

  for (int i = 0; i < 5; i++)
  {
    fout << arr[i] << " ";
  }

  fout.close();
}





#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
  ofstream fout;
  fout.open("z1.txt");
  fout << "Hellow India \n";
  fout << "Hellow Abhinav \n";
  fout << "Hellow Bhai \n";
  fout.close();

  ifstream fin;
  fin.open("z1.txt");

  string line;

  while (getline(fin, line))
  {
    cout << line << endl;
  }

  fin.close();
}