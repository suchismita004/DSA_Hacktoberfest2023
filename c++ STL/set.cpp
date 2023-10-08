/*
     .end() =  last element para space/null ku point kare
     .begin() = first element ku point kare
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
  set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}
/*
Output:

Elements present in the set: 1 2 3 4 5 6 7 8 9 10 
2 is present in set
Elements after deleting the first element: 2 3 4 5 6 7 8 9 10
The size of the set is: 9
The set is not empty
Size of the set after clearing all the elements: 0
*/